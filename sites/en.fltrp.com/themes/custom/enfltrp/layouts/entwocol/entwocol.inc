<?php

// Plugin definition
$plugin = array(
  'title' => t('bxy enfltrp 2 column'),
  'category' => t('Columns: 2'),
  'icon' => 'entwocol.png',
  'theme' => 'panels_entwocol',
  'css' => 'entwocol.css',
  'regions' => array(
    'left' => t('模仿模板默认的first sidebar，通过把这个区块div id设为first-sidebar'),
    'right' => t('模仿模板默认的content区块。但不能共用其id。用自定义的div id')
  ),
);
