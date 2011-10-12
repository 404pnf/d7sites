<?php

/**
 *读后感评分模块管理员设置页面，主要设置谁可以进行评分
 */
function theme_dhg_pingfen($variables) {
  $node =  $variables['node'];
  return drupal_render(drupal_get_form('dhg_pingfen_rate_form_'.$node->nid, $node));
}

function dhg_pingfen_rate_form($form_state, $args) {
  //$node = $args[0];
	$nid= $args['build_info']['args'][0]->nid;
	$node =node_load($nid);
//drupal_set_message('<pre>'.print_r($node).'</pre>');
	$form['#validate'][] = 'dhg_pingfen_rate_form_validate';
  $form['#submit'][] = 'dhg_pingfen_rate_form_submit';
	//$form['#id'] = 'duhougan-pingfen-rate-form-'.$node->nid;
  $form['nid'] = array('#type' => 'value', '#value' => $node->nid);

  global $user;
  $score = array();
  $r = 0;
  $score[] = t('Select');

	for($j=100; $j>=50; $j--) {
    $score[$j] = $j;
  }


  //$set='rate';
	$set=$node->nid;
  $form[$set] = array(
    '#type'   => 'fieldset',
    '#title'  => t('对此读后感评分'),
    '#value'  => t('<br>分数从50到100分'),
    '#prefix' => '<div id="duhougan_pingfen">',
    '#suffix' => '</div>',
   );

  $form[$set]['score'] = array(
    '#type' => 'select',
    '#title' => t('分数'),
    
	'#prefix' => "<div id='score_id'>",
	 '#suffix' => "</div>",
    '#options' => $score,
		'#default_value' => isset($node->field_rate['zh-hans'][0]['value'])?$node->field_rate['zh-hans'][0]['value']:'',
	 '#required'=> TRUE,
  );
    $form[$set]['nid'] = array(
    '#type' => 'hidden',
	'#value' => $node->nid,
  );

  $form[$set]['submit'] = array(
    '#type'  => 'submit',
		'#id' => 'edit-submit-'. $node->nid,
    '#value' => t('打分'),
  );
	/*
	$form[$set]['cancel'] = array(
    '#type'  => 'submit',
		'#id' => 'edit-cancel-'. $node->nid,
    '#value' => t('取消'),
  );
	*/

  $form['#attributes'] = array('class' => 'dhg-pingfen-form');

  return $form;
}

function dhg_pingfen_rate_form_validate($form, &$form_state){
	if($form_state['values']['op']== $form_state['values']['submit']){
		if(!$form_state["values"]["score"]){
			form_set_error("score","你必须选择一个分数");
		}
	}
	
}

function dhg_pingfen_rate_form_submit($form, &$form_state){
	global $user;
	if($form_state['values']['op']== $form_state['values']['submit']){
		if($form_state["values"]["score"]){
      $nid = $form_state["values"]["nid"];
			$node = node_load($nid);
			$node->field_rate = array(
			  'zh-hans' => array(
				  0 => array(
					  'value' => $form_state["values"]["score"]
					)
				)
			);
			node_save($node);
		}
	}	

}