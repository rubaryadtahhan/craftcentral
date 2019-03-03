<?php

/**
 * @file
 * designer_makers_profile.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function designer_makers_profile_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'dm_products_centered';
  $preset->label = 'DM Products Centered';
  $preset->breakpoints = 1;
  $preset->skin = 'boxed-carousel';
  $preset->options = array(
    'general' => array(
      'normal' => '',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => TRUE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.35,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'useTransform' => FALSE,
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 480,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => FALSE,
            'centerMode' => TRUE,
            'centerPadding' => '50px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => FALSE,
            'focusOnSelect' => FALSE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 1,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.35,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => '',
            'cssEaseOverride' => '',
            'useTransform' => FALSE,
            'easing' => 'linear',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['dm_products_centered'] = $preset;

  return $export;
}
