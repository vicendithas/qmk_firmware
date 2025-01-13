RGB_MATRIX_EFFECT(vicendithas_static_rainbow)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool vicendithas_static_rainbow(effect_params_t* params) {
	RGB_MATRIX_USE_LIMITS(led_min, led_max);
	
	for (uint8_t i = led_min; i < led_max; i++) {
		//1st row
		if (i >= 0 && i <= 17) { 
			rgb_matrix_set_color(i, 0xff, 0x00, 0x00);
		}
		//2nd row
		if (i >= 18 && i <= 35) { 
			rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
		}
		//3rd row
		if (i >= 36 && i <= 53) { 
			rgb_matrix_set_color(i, 0x00, 0xff, 0x00);
		}
		//4th row
		if (i >= 54 && i <= 69) { 
			rgb_matrix_set_color(i, 0x00, 0xff, 0xff);
		}
		//5th row
		if (i >= 70 && i <= 86) { 
			rgb_matrix_set_color(i, 0x00, 0x00, 0xff);
		}
		//6th row
		if (i >= 87 && i <= 98) { 
			rgb_matrix_set_color(i, 0xff, 0x00, 0xff);
		}
	}
	
	return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS