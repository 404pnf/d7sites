<?php

/**
 * @file
 * CAS module settings UI.
 */

/**
 * Provides settings pages.
 */
function cas_admin_settings() {

  $form['library'] = array(
    '#type' => 'fieldset',
    '#title' => t('Library (phpCAS)'),
    '#collapsible' => TRUE,
  );
  if (module_exists('libraries')) {
    // If Libraries API is enabled, print an information item.
    $form['library']['cas_library_dir'] = array(
      '#type' => 'item',
      '#title' => t('Library directory'),
      '#value' => t('Using <a href="@url">Libraries API</a>.', array('@url' => 'http://drupal.org/project/libraries')),
      '#description' => t('Please ensure phpCAS is installed in a location compatible with Libraries API. For example, install phpCAS so that <em>sites/all/libraries/CAS/CAS.php</em> exists. See README.txt for more information.'),
      '#after_build' => array('cas_library_version_check'),
    );
  }
  else {
    // If Libraries API is not installed, display path settings.
    $form['library']['cas_library_dir'] = array(
      '#type' => 'textfield',
      '#title' => t('Library directory'),
      '#default_value' => variable_get('cas_library_dir', 'CAS'),
      '#description' => t('Specify the path to the directory the CAS.php file resides in. Leave blank to load cas from your phpinclude path.'),
      '#after_build' => array('cas_library_version_check'),
    );
  }


  $form['server'] = array(
    '#type' => 'fieldset',
    '#title' => t('CAS Server'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['server']['cas_version'] = array(
    '#type' => 'radios',
    '#title' => t('Version'),
    '#default_value' => variable_get('cas_version', '2.0'),
    '#options' => array(
      '1.0' => '1.0',
      '2.0' => t('2.0 or higher'),
      'S1' => t('SAML Version 1.1'),
    ),
  );

  $form['server']['cas_server'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname'),
    '#default_value' => variable_get('cas_server', ''),
    '#size' => 30,
    // Hostnames can be 255 characters long.
    '#maxlength' => 255,
    '#description' => t('Hostname or IP Address of the CAS server.'),
  );

  $form['server']['cas_port'] = array(
    '#type' => 'textfield',
    '#title' => t('Port'),
    '#default_value' => variable_get('cas_port', '443'),
    '#size' => 5,
    // The maximum port number is 65536, 5 digits.
    '#maxlength' => 5,
    '#description' => t('443 is the standard SSL port. 8443 is the standard non-root port for Tomcat.'),
  );

  $form['server']['cas_uri'] = array(
    '#type' => 'textfield',
    '#title' => t('URI'),
    '#default_value' => variable_get('cas_uri', ''),
    '#size' => 30,
    '#description' => t('If CAS is not at the root of the host, include a URI (e.g., /cas).'),
  );

  $form['login'] = array(
    '#type' => 'fieldset',
    '#title' => t('Login form'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['login']['cas_login_invite'] = array(
    '#type' => 'textfield',
    '#title' => t('CAS Login invitation'),
    '#default_value' => variable_get('cas_login_invite', CAS_LOGIN_INVITE_DEFAULT),
    '#description' => t('Message users will see to invite them to log in with CAS credentials.'),
  );

  $form['login']['cas_login_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Successful login message'),
    '#default_value' => variable_get('cas_login_message', 'Logged in via CAS as %cas_username.'),
    '#description' => t('Message displayed when a user logs in successfully. <em>%cas_username</em> will be replaced with the user\'s name.'),
  );

  $form['misc'] = array(
    '#type' => 'fieldset',
    '#title' => t('Login/Logout Destinations'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Settings for redirection upon first login
  $form['misc']['cas_first_login_destination'] = array(
    '#type' => 'textfield',
    '#title' => t('Initial login destination'),
    '#default_value' => variable_get('cas_first_login_destination', ''),
    '#size' => 40,
    '#maxlength' => 255,
    '#description' => t("Drupal path or URL. Enter a destination if you want the user to be redirected to this page on their first CAS login. An example path is <em>blog</em> for the blog page, <em>&lt;front&gt;</em> for the front page, or <em>user</em> for the user's page."),
  );

  // Setting for page to return to after a CAS logout
  $form['misc']['cas_logout_destination'] = array(
    '#type' => 'textfield',
    '#title' => t('Logout destination'),
    '#default_value' => variable_get('cas_logout_destination', ''),
    '#size' => 40,
    '#maxlength' => 255,
    '#description' => t("Drupal path or URL. Enter a destination if you want a user to be directed to this page after logging out of CAS, or leave blank to direct users back to the previous page. An example path is <em>blog</em> for the blog page or <em>&lt;front&gt;</em> for the front page."),
  );

  return system_settings_form($form);
}

/**
 * Checks that the library is installed in the location specified by loading the
 * class and extracting the version.
 *
 * @param $element
 *   The form element containing the "library" fieldset.
 * @param $form_state
 *   An array containing the form's state information.
 *
 * @return
 *   The modified form element containing the "library" fieldset.
 */
function cas_library_version_check($element, &$form_state) {
  $path = module_exists('libraries') ? NULL : $element['#value'];
  // Suppress errors if phpCAS cannot be loaded.
  if ($version = @cas_phpcas_load($path)) {
    $element['#suffix'] = '<div class="ok messages">' . t('phpCAS version %version successfully loaded.', array('%version' => $version)) . '</div>';
  }
  else {
    $element['#suffix'] = '<div class="error messages">' . t('The phpCAS library was not found or could not be loaded.') . '</div>';
  }
  return $element;
}
