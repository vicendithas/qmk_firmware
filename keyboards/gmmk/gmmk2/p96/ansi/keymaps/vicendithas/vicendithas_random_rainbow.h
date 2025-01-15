RGB_MATRIX_EFFECT(vicendithas_random_rainbow)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static hsv_t vicendithas_random_rainbow_math(hsv_t hsv, uint8_t i, uint8_t time) {
	hsv.h = rand() % 256;

	return hsv;
}

static bool vicendithas_random_rainbow(effect_params_t* params) {
	return effect_runner_i(params, &vicendithas_random_rainbow_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS