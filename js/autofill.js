(function ($) {
  Drupal.behaviors.gsbFeatureSpotlight = {
    attach: function (context) {
      // Hide the nid field.
      $('.field-name-field-spotlight-person-nid, .field-name-field-spotlight-person-fid' ).hide();

      // Set our autocomplete on load.
      Drupal.gsbFeatureSpotlight.toggleAutocomplete();

      oldFid = $(':input[name="field_spotlight_person_fid[und][0][value]"]').val();
      if (Math.floor(oldFid) == oldFid && $.isNumeric(oldFid)) {
        $('#gsb-person-image-wrapper').load(Drupal.settings.basePath + 'gsb_feature_spotlight_create_thumbnail/' + oldFid);
      }

      // If they choose a type adjust the autocomplete.
      $('input[name="field_spotlight_person_type[und]"]').click(function() {
        Drupal.gsbFeatureSpotlight.toggleAutocomplete();
      });
    }
  }

  Drupal.gsbFeatureSpotlight = Drupal.gsbFeatureSpotlight || {}
  Drupal.gsbFeatureSpotlight.toggleAutocomplete = function() {
    // Get the chosen type
    personType = $('input[name="field_spotlight_person_type[und]"]:checked').val();

    // Add class to the body element to hide the autocomplete.
    // @TODO Add the allowed types via javascript settings so we can have any number of types.
    if (personType == 'Faculty' || personType == 'Staff') {
      $(':input[name="field_first_name[und][0][value]"]').siblings('input').val(Drupal.settings.basePath + 'gsb_feature_spotlight_autocomplete/' + personType + '/first');
      $(':input[name="field_last_name[und][0][value]"]').siblings('input').val(Drupal.settings.basePath + 'gsb_feature_spotlight_autocomplete/' + personType + '/last');
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').addClass('form-autocomplete');
      Drupal.behaviors.autocomplete.attach(document);

      // If an item is autocompleted fill the fields.
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').blur(function(e) {
        data = $('#autocomplete .selected .item-wrapper').data('info');
        if (data) {
          data = data.split('|');
          nid = data[0];
          firstName = data[1];
          lastName = data[2];
          title = data[3];
          link = data[4];
          fid = data[5];
          $(':input[name="field_spotlight_person_nid[und][0][value]"]').val(nid);
          $(':input[name="field_first_name[und][0][value]"]').val(firstName);
          $(':input[name="field_last_name[und][0][value]"]').val(lastName);
          $(':input[name="field_title_position_single[und][0][value]"]').val(title);
          $(':input[name="field_spotlight_person_fid[und][0][value]"]').val(fid);

          $('#gsb-person-image-wrapper').load(Drupal.settings.basePath + 'gsb_feature_spotlight_create_thumbnail/' + fid);
          $(':input[name="field_link_single[und][0][url]"]').val(link);
        }
      });
    }
    else {
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').unbind();
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').removeClass('form-autocomplete');
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').siblings('input').removeClass('autocomplete-processed');
      $(':input[name="field_first_name[und][0][value]"], :input[name="field_last_name[und][0][value]"]').siblings('span').remove();
    }
  }
})(jQuery);
