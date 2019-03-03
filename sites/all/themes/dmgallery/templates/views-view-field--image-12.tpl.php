<?php
     if ($output != '') {
        print theme('imagecache_external', array(
            'path' => $output,
            'style_name'=> 'dm_products'
            )
        );
    } 
?>