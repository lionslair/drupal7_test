<?php
/**
 * @file
 * person_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function person_content_type_node_info() {
  $items = array(
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('Information about a person'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
