<?php

/**
 * @file
 * Views functions for views term path.
 */

/**
 * Implements hook_views_data().
 */
function views_term_path_views_data() {
  $data['taxonomy_term_data']['path'] = [
    'field' => [
      'group' => t('Taxonomy term'),
      'title' => t('Path'),
      'help' => t('The aliased path to this term.'),
      'id' => 'term_path',
    ],
  ];
  return $data;
}
