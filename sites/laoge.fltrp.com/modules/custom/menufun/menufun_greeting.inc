<?php

function menufun_greeting($firstname = '', $lastname = '', $from_fn = '', $from_ln = '') {
  return t('Hello @firstname @lastname from @from_fn @from_ln',
          array(
            '@firstname' => $firstname,
            '@lastname' => $lastname,
            '@from_fn' => $from_fn,
            '@from_ln' => $from_ln,));
}

function menufun_farewell($firstname = '', $lastname = '', $from_fn = '', $from_ln = '') {
  return t('Farewell @firstname @lastname from @from_fn @from_ln',
          array(
            '@firstname' => $firstname,
            '@lastname' => $lastname,
            '@from_fn' => $from_fn,
            '@from_ln' => $from_ln,));
}
