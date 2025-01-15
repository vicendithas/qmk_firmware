RGB_MATRIX_EFFECT(vicendithas_random_rainbow)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool vicendithas_random_rainbow(effect_params_t* params) {
	RGB_MATRIX_USE_LIMITS(led_min, led_max);
	
	static fast_timer_t timer = 0;
	
	if ((params->iter == 0) && (timer_elapsed_fast(timer) > (320 - rgb_matrix_config.speed))) {
        for (uint8_t i = led_min; i < led_max; i++) {
			hsv_t hsv = {random8(), rgb_matrix_config.hsv.s, rgb_matrix_config.hsv.v};
			rgb_t rgb = rgb_matrix_hsv_to_rgb(hsv);
			rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
		}
		timer = timer_read_fast();
    }
	
	return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS