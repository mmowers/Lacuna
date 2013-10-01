<?php
/**
 * @file
 * feature_lacuna.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_lacuna_taxonomy_default_vocabularies() {
  return array(
    'genre_audio' => array(
      'name' => 'Genre - Audio',
      'machine_name' => 'genre_audio',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'genre_doc' => array(
      'name' => 'Genre - Document',
      'machine_name' => 'genre_doc',
      'description' => 'The genre of a documents.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'genre_image' => array(
      'name' => 'Genre - Image',
      'machine_name' => 'genre_image',
      'description' => 'Genres of images',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'genre_video' => array(
      'name' => 'Genre - Video',
      'machine_name' => 'genre_video',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
