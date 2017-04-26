<?php
/**
 * @file
 * variable.islandora_book_viewers.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'islandora_book_viewers',
  'content' => array(
    'name' => array(
      'none' => 'none',
      'islandora_internet_archive_bookreader' => 'islandora_internet_archive_bookreader',
    ),
    'default' => 'islandora_internet_archive_bookreader',
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
