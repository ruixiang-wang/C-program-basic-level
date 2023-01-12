#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(char d[]) {
	int i = 0;
	while (d[i]) {
		printf("%c", d[i++] - 32);
	}
	printf("\n");  // printf要用“”而不是‘’。
}



int main() {
	char c[10] = "hello";
	print(c);
	return 0;
}