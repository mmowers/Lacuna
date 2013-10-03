(function ($) {
  Drupal.behaviors.MMextra = { 
    attach: function(context,settings) {
      $('ul.menu li').click(function(){
        window.location.href = $(this).children('a').first().attr('href');
      });
      $('ul.menu li a').click(function(e){
        e.stopProgagation();
      });
      
      //Adding classes to menu items for coloring. This is a hack, but I haven't yet thought
      //of a better way within drupal to do this...
      var color_array=["orange","light-blue","dark-blue","light-grey","green","purple"];
      $("#block-menu-menu-top-right .content .menu li a").each(function(index){
        $(this).addClass("lacuna-color-"+color_array[index%color_array.length]);
      });
      $("#block-menu-menu-left-menu .content .menu li a").each(function(index){
        $(this).addClass("lacuna-color-"+color_array[index%color_array.length]);
      });      
    }
  };
}) (jQuery);
