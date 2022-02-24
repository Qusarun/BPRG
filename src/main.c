#include "../include/prg.h"
#include <stdio.h>
#include <time.h>

void time_random(int limit) {
	ull x = time(0);
	for (int i = 0; i < limit; i++) {
		x = rand(x);
		printf("%llu\n", x);
	}
}

void set_random(int limit) {
	for (int i = 0; i < limit; i++)
		printf("%llu\n", rand(i));
}

int main(void) {
	time_random(50);
	return 0;
}
