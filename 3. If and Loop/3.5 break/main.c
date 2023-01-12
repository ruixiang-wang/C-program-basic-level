#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, total;
	for (i = 1, total = 0; i <= 100; i++) {
		if (total > 3000)break;
		total += i;
	}
	printf("total = %d, i = %d", total, i);
}