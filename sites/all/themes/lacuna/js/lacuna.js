(function ($) {
  Drupal.behaviors.MMextra = { 
    attach: function(context,settings) {
      $('ul.menu li').click(function(){
        window.location.href = $(this).children('a').first().attr('href');
      });
      $('ul.menu li a').click(function(e){
        e.stopProgagation();
      });
    }
  };
}) (jQuery);
