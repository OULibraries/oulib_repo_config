<?php
/**
 * @file
 * variable.islandora_book_page_viewers.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'islandora_book_page_viewers',
  'content' => array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
