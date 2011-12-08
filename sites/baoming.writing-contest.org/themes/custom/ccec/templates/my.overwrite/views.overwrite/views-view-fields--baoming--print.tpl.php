<?php
// $Id: views-view-fields.tpl.php,v 1.6.6.1 2010/12/04 07:39:35 dereine Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php
	//print("<pre>");
	//print_r($row);
   //print("</pre>");

?>
<style>
table{width:100%; border:1px solid #333;border-top:0px solid #333;}
td{border:1px solid #333;padding:2px 10px;}
#group{border-left:2px solid #333;border-right:2px solid #333;border-bottom:1px solid #333;padding:0 10px;font-style:italic;font-weight:bold;}
</style>
<div >
<?php
	$name= $row->node_title;
	$group = $row->field_field_group[0]['raw']['value'];
	$name_pinyin = $row->field_field_pinyin[0]['raw']['value'];
	$id_no = $row->field_field_id_no[0]['raw']['value'];
	$specialty = $row->field_field_specialty[0]['raw']['value'];
	$gender = $row->field_field_gender[0]['raw']['value'];
	$leader_name = $row->field_field_leader_name[0]['raw']['value'];
	$leader_gender = $row->field_field_leader_gender[0]['raw']['value'];
	$leader_title = $row->field_field_leader_title[0]['raw']['value'];
	$leader_tel = $row->field_field_leader_tel[0]['raw']['value'];
	$leader_mobile = $row->field_field_leader_mobile[0]['raw']['value'];
	$leader_email = $row->field_field_leader_email[0]['raw']['value'];
	//$degree = $row->field_field_baoming[0]['raw']['taxonomy_term']->name;
?>
   <div id="playerinfo">	
		<div id="group"><?php print $group;?></div>
		<div id="player">
					<table   border="0" cellspacing="0" >
					  <tr>
						<td width="180">选手中文姓名、拼音：<br>
								<span id="name"><?php print $name;?></span>
								(<span id="name_pinyin"><?php print $name_pinyin;?></span>)
						</td>
						<td>身份证号：<?php print $id_no;?></td>
					  </tr>
					  <tr>
						<td>专业：<?php print $specialty;?></td>
						<td>性别：<?php print $gender;?></td>
					  </tr>
					</table>
		</div>
		<div id="leader">
				<table  border="0" cellspacing="0" >
				  <tr>
					<td width="180">指导教师姓名</td>
					<td>性别</td>
					<td>职务</td>
					<td>联系方式</td>
				  </tr>
				  <tr>
					<td><div id="leader_name"><?php print $leader_name;?></div></td>
					<td><div id="leader_gender"><?php print $leader_gender;?></div></td>
					<td><div id="leader_title"><?php print $leader_title;?></div></td>
					<td>	
							<span id="leader_tel"><?php print $leader_tel;?></span>|
							<span id="leader_mobile"><?php print $leader_mobile;?></span>|
							<span id="leader_email"><?php print $leader_email;?></span>
					</td>
				  </tr>
				</table>

		 </div>
	 </div>
</div>