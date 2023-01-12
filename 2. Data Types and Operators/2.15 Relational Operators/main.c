#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 15;
	if (3 < a && a < 10) {
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	// 判断浮点数相等与否 要用近似
	float f = 23.56;
	if (f == 23.56) {
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	if (f - 23.56 < 0.00001 || f - 23.56 > - 0.00001) {  // 保持七位
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	int i, j = 5;
	i = !!j;
	printf("i = %d", i);


	




}