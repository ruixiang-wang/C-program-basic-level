#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, total;
	for (i = 1, total = 0; i <= 100; i++) {
		if (i % 2 == 0)continue;
		total += i;
	}
	printf("total = %d", total);
}