if (Drupal.jsEnabled) {
  $(document).ready(function () { 
    var deadline = new Date(2011,5,28);
		alert("123456");
    $('#defaultCountdown').countdown({
		  until: deadline,
			format: 'YOWDHMS',
			significant: 4,
			layout: '{d<}{dn} {dl} {d>}{h<}{hn} {hl} {h>}{m<}{mn} {ml} {m>}{s<}{sn} {sl}{s>}'
		}); 
	});	
}