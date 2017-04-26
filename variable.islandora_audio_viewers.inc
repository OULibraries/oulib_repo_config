<?php
/**
 * @file
 * variable.islandora_audio_viewers.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'islandora_audio_viewers',
  'content' => array(
    'name' => array(
      'none' => 'none',
      'islandora_videojs' => 'islandora_videojs',
    ),
    'default' => 'islandora_videojs',
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
