#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	int total = 0;
	while (i <= 100) { //while 后面不加分号
		total = total + i;
		i++;
	}
	printf("total = %d", total);
}