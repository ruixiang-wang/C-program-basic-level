#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, temp, c;
	while (scanf("%d", &a) != EOF) {
		b = 0;
		c = a;
		while (a) {
			temp = a % 10;
			b = b * 10 + temp;
			a = a / 10;
		}
		// printf("b = %d\n", b);
		if (c == b) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}