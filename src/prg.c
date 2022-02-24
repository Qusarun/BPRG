#include "../include/prg.h"

ull custom_pow(ull a, ull b) {
	ull result = 1;
	for (ull l = 0; l < b; l++)
		result *= a;
	return result;
}

ull rand(ull seed) {
	ull result = rand_pre(seed);
	for (int i = 0; i < 12; i++)
		result += rand_pre(result) * custom_pow(10, i);
	return result;
}

ull rand_pre(ull seed) {
	seed %= 1000000000;
	seed *= seed;
	while (seed > 10000000000000)
		seed /= 10;
	if (seed > 1000000000000) {
		seed /= 1000000;
		seed %= 1000000;
	} else {
		return rand_pre(seed + 3);
	}

	return seed;
}
