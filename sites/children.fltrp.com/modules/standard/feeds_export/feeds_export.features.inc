<?php
/**
 * @file
 * feeds_export.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feeds_export_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}
