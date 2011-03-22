Drupal.locale = { 'pluralFormula': function ($n) { return Number(($n!=1)); }, 'strings': {"An AJAX HTTP error occurred.":"\u53d1\u751f\u4e00\u4e2aAJAX HTTP\u9519\u8bef\u3002","HTTP Result Code: !status":"HTTP\u8fd4\u56de\u4ee3\u7801\uff1a!status","An AJAX HTTP request terminated abnormally.":"\u4e00\u4e2aAJAX HTTP\u8bf7\u6c42\u5f02\u5e38\u7ec8\u6b62\u3002","Debugging information follows.":"\u8c03\u8bd5\u4fe1\u606f\u5982\u4e0b\u3002","Path: !uri":"\u8def\u5f84\uff1a!uri","StatusText: !statusText":"\u72b6\u6001\u6587\u672c: !statusText","ResponseText: !responseText":"\u54cd\u5e94\u6587\u672c\uff1a !responseText","ReadyState: !readyState":"\u51c6\u5907\u72b6\u6001\uff1a !readyState","Loading":"\u6b63\u5728\u52a0\u8f7d","(active tab)":"\uff08\u6d3b\u52a8\u6807\u7b7e\uff09","Configure":"\u914d\u7f6e","Hide":"\u9690\u85cf","Show":"\u663e\u793a","Re-order rows by numerical weight instead of dragging.":"\u4e0d\u7528\u62d6\u653e\u64cd\u4f5c\uff0c\u800c\u7528\u6570\u5b57\u6743\u91cd\u65b9\u5f0f\u91cd\u65b0\u5bf9\u884c\u6392\u5e8f\u3002","Show row weights":"\u663e\u793a\u884c\u7684\u6743\u91cd","Hide row weights":"\u9690\u85cf\u884c\u7684\u6743\u91cd","Drag to re-order":"\u62d6\u653e\u91cd\u65b0\u6392\u5e8f","Changes made in this table will not be saved until the form is submitted.":"\u5728\u6b64\u8868\u683c\u4e2d\u7684\u4fee\u6539\u53ea\u6709\u5728\u6574\u4e2a\u8868\u5355\u63d0\u4ea4\u540e\u624d\u4f1a\u88ab\u4fdd\u5b58\u3002","@title dialog":"@title\u5bf9\u8bdd\u6846","Show shortcuts":"\u663e\u793a\u5feb\u6377\u65b9\u5f0f","Hide shortcuts":"\u9690\u85cf\u5feb\u6377\u952e","Enabled":"\u542f\u7528","Default":"\u9ed8\u8ba4","Disabled":"\u7981\u7528","Remove":"\u5220\u9664","Edit":"\u7f16\u8f91","Add":"\u6dfb\u52a0","Done":"\u5b8c\u6210","Key":"\u5bc6\u94a5","Select all rows in this table":"\u9009\u62e9\u6b64\u8868\u4e2d\u6240\u6709\u7684\u884c","Deselect all rows in this table":"\u53d6\u6d88\u9009\u62e9\u6b64\u8868\u4e2d\u6240\u6709\u7684\u884c","Not published":"\u672a\u53d1\u8868","Please wait...":"\u8bf7\u7a0d\u7b49...","By @name on @date":"By @name \u5728 @date","By @name":"\u6309 @name","Not in menu":"\u4e0d\u5728\u83dc\u5355\u4e2d","Alias: @alias":"\u522b\u540d\uff1a@alias","No alias":"\u65e0\u522b\u540d","New revision":"\u65b0\u5efa\u4fee\u8ba2\u7248\u672c","The changes to these blocks will not be saved until the \u003cem\u003eSave blocks\u003c\/em\u003e button is clicked.":"\u8fd9\u4e9b\u533a\u5757\u7684\u53d8\u66f4\u4e0d\u4f1a\u88ab\u50a8\u5b58\u8d77\u6765\uff0c\u9664\u975e\u60a8\u6309\u4e0b\u003cem\u003e\u50a8\u5b58\u533a\u5757\u003c\/em\u003e\u7684\u6309\u94ae\u3002","This permission is inherited from the authenticated user role.":"\u6b64\u6743\u9650\u7ee7\u627f\u81ea\u6ce8\u518c\u7528\u6237\u89d2\u8272\u3002","No revision":"\u6ca1\u6709\u4fee\u8ba2\u7248\u672c","Requires a title":"\u9700\u8981\u6807\u9898","Not restricted":"\u672a\u53d7\u9650\u5236","Not customizable":"\u4e0d\u53ef\u81ea\u5b9a\u4e49\u7684","Restricted to certain pages":"\u9650\u5236\u5230\u7279\u5b9a\u7684\u533a\u5757","The block cannot be placed in this region.":"\u8fd9\u4e2a\u533a\u5757\u4e0d\u80fd\u653e\u624d\u8fd9\u4e2a\u533a\u57df\u4e2d\u3002","Customize dashboard":"\u81ea\u5b9a\u4e49\u9762\u677f","Hide summary":"\u9690\u85cf\u6458\u8981","Edit summary":"\u7f16\u8f91\u6458\u8981","Don't display post information":"\u4e0d\u8981\u663e\u793a\u53d1\u5e03\u4fe1\u606f\u3002","The selected file %filename cannot be uploaded. Only files with the following extensions are allowed: %extensions.":"\u9009\u62e9\u7684\u6587\u4ef6%filename\u65e0\u6cd5\u4e0a\u4f20\u3002\u53ea\u6709\u4ee5\u4e0b\u7c7b\u578b\u7684\u6587\u4ef6\u88ab\u5141\u8bb8\uff1a%extensions\u3002"} };;
// $Id: system.js,v 1.41 2010/10/13 13:43:21 dries Exp $
(function ($) {

/**
 * Show/hide the 'Email site administrator when updates are available' checkbox
 * on the install page.
 */
Drupal.hideEmailAdministratorCheckbox = function () {
  // Make sure the secondary box is shown / hidden as necessary on page load.
  if ($('#edit-update-status-module-1').is(':checked')) {
    $('.form-item-update-status-module-2').show();
  }
  else {
    $('.form-item-update-status-module-2').hide();
  }

  // Toggle the display as necessary when the checkbox is clicked.
  $('#edit-update-status-module-1').change( function () {
    $('.form-item-update-status-module-2').toggle();
  });
};

/**
 * Internal function to check using Ajax if clean URLs can be enabled on the
 * settings page.
 *
 * This function is not used to verify whether or not clean URLs
 * are currently enabled.
 */
Drupal.behaviors.cleanURLsSettingsCheck = {
  attach: function (context, settings) {
    // This behavior attaches by ID, so is only valid once on a page.
    // Also skip if we are on an install page, as Drupal.cleanURLsInstallCheck will handle
    // the processing.
    if (!($('#edit-clean-url').length) || $('#edit-clean-url.install').once('clean-url').length) {
      return;
    }
    var url = settings.basePath + 'admin/config/search/clean-urls/check';
    $.ajax({
      url: location.protocol + '//' + location.host + url,
      dataType: 'json',
      success: function () {
        // Check was successful. Redirect using a "clean URL". This will force the form that allows enabling clean URLs.
        location = settings.basePath +"admin/config/search/clean-urls";
      }
    });
  }
};

/**
 * Internal function to check using Ajax if clean URLs can be enabled on the
 * install page.
 *
 * This function is not used to verify whether or not clean URLs
 * are currently enabled.
 */
Drupal.cleanURLsInstallCheck = function () {
  var url = location.protocol + '//' + location.host + Drupal.settings.basePath + 'admin/config/search/clean-urls/check';
  // Submit a synchronous request to avoid database errors associated with
  // concurrent requests during install.
  $.ajax({
    async: false,
    url: url,
    dataType: 'json',
    success: function () {
      // Check was successful.
      $('#edit-clean-url').attr('value', 1);
    }
  });
};

/**
 * When a field is filled out, apply its value to other fields that will likely
 * use the same value. In the installer this is used to populate the
 * administrator e-mail address with the same value as the site e-mail address.
 */
Drupal.behaviors.copyFieldValue = {
  attach: function (context, settings) {
    for (var sourceId in settings.copyFieldValue) {
      $('#' + sourceId, context).once('copy-field-values').bind('blur', function () {
        // Get the list of target fields.
        var targetIds = settings.copyFieldValue[sourceId];
        // Add the behavior to update target fields on blur of the primary field.
        for (var delta in targetIds) {
          var targetField = $('#' + targetIds[delta]);
          if (targetField.val() == '') {
            targetField.val(this.value);
          }
        }
      });
    }
  }
};

/**
 * Show/hide custom format sections on the regional settings page.
 */
Drupal.behaviors.dateTime = {
  attach: function (context, settings) {
    for (var value in settings.dateTime) {
      var settings = settings.dateTime[value];
      var source = '#edit-' + value;
      var suffix = source + '-suffix';

      // Attach keyup handler to custom format inputs.
      $('input' + source, context).once('date-time').keyup(function () {
        var input = $(this);
        var url = settings.lookup + (settings.lookup.match(/\?q=/) ? '&format=' : '?format=') + encodeURIComponent(input.val());
        $.getJSON(url, function (data) {
          $(suffix).empty().append(' ' + settings.text + ': <em>' + data + '</em>');
        });
      });
    }
  }
};

/**
 * Show the powered by Drupal image preview
 */
Drupal.behaviors.poweredByPreview = {
  attach: function (context, settings) {
    $('#edit-color, #edit-size').change(function () {
      var path = settings.basePath + 'misc/' + $('#edit-color').val() + '-' + $('#edit-size').val() + '.png';
      $('img.powered-by-preview').attr('src', path);
    });
  }
};


 /**
 * Show/hide settings for page caching depending on whether page caching is
 * enabled or not.
 */
Drupal.behaviors.pageCache = {
  attach: function (context, settings) {
    $('#edit-cache-0', context).change(function () {
      $('#page-compression-wrapper').hide();
      $('#cache-error').hide();
    });
    $('#edit-cache-1', context).change(function () {
      $('#page-compression-wrapper').show();
      $('#cache-error').hide();
    });
    $('#edit-cache-2', context).change(function () {
      $('#page-compression-wrapper').show();
      $('#cache-error').show();
    });
  }
};

})(jQuery);
;
