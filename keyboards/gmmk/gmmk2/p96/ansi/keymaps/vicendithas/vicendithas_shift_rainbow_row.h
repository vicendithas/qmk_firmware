RGB_MATRIX_EFFECT(vicendithas_shift_rainbow_row)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static hsv_t vicendithas_shift_rainbow_row_math(hsv_t hsv, uint8_t i, uint8_t time) {
	hsv.h = 4 * (g_led_config.point[i].y) - time;
	return hsv;
}

static bool vicendithas_shift_rainbow_row(effect_params_t* params) {
	return effect_runner_i(params, &vicendithas_shift_rainbow_row_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS