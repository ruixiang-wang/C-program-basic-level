#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int i;
	while (scanf("%d", &i) != EOF) {
		if (i > 0) {
			printf("i > 0");
		}
		else {
			printf("i <= 0");
		}
	}
}