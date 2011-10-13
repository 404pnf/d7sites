<?php
/**
 *  定义考试时间；
 */
?>
<?php  
if($fields['field_baokao_jibie']->content =='一级'){
$kaoshi_date ="2011年10月29日";
$kaoshi_time ="9:00--9:50";
}elseif($fields['field_baokao_jibie']->content =='二级'){
$kaoshi_date ="2011年10月29日";
$kaoshi_time ="10:30--11:30";
}elseif($fields['field_baokao_jibie']->content =='三级'){
$kaoshi_date ="14:00--15:40";
$kaoshi_time ="下午2:00---5:003";
}elseif($fields['field_baokao_jibie']->content =='四级'){
$kaoshi_date ="2012年10月29日";
$kaoshi_time ="9:00--9:50";
}else{
$kaoshi_date ="2012年10月29日";
$kaoshi_time ="9:00--9:50";
}

?>
<div class="backgroundimage"><img src="/sites/ncte.2u4u.com.cn/files/zhunkaozheng/zkzbg2.jpg"/></div>
<div class ="zkz-left zkzphoto">
<?php print $fields['field_kaosheng_photo']->content ?>
</div>

<div class ="zkz-right">
<div><span class="zkzlabel zkzhlabel"><?php print t('准考证号:') ?></span> <span class="zkzcontent zkzhcontent"><?php print $fields['field_zkzh']->content ?></span></div>

<div><span class="zkzlabel ksxmlabel"><?php print t('考生姓名:') ?></span> <span class="zkzcontent ksxmcontent"><?php print $fields['title']->content ?></span></div>

<div><span class="zkzlabel ksjblabel"><?php print t('考试级别:') ?></span> <span class="zkzcontent ksjbcontent"><?php print $fields['field_baokao_jibie']->content ?></span></div>

<div><span class="zkzlabel ksrqlabel"><?php print t('考试日期:') ?></span> <span class="zkzcontent ksrqcontent"><?php print $kaoshi_date ?></span></div>

<div><span class="zkzlabel kssjlabel"><?php print t('考试时间:') ?></span> <span class="zkzcontent kssjcontent"><?php print $kaoshi_time ?></span></div>
</div>


<div class ="zkz-bottom">
<span class="ksdd zkz"><span class="zkzlabel ksddlabel"><?php print t('考试地点:') ?></span> <span class="zkzcontent ksddcontent"><?php print $fields['field_kaochang']->content ?></span></span>

<?php 
/*
<span class="kch zkz"><span class="zkzlabel kchlabel"><?php print t('考场号:') ?></span> <span class="zkzcontent kchcontent"><?php print $fields['field_kaodian_bianma']->content ?></span></span>
*/
?>
<span class="zwh zkz"><span class="zkzlabel zwhlabel"><?php print t('座位号:') ?></span> <span class="zkzcontent zwhcontent"><?php print $fields['field_zuowei']->content ?></span></span>

</div>
