#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 清空缓冲区 fflash(stdin) VS2012
// stdin 是标准输入

int main() {
	int i;
	char c;
	float f;
	scanf("%d %c%f", &i, &c, &f); // 混合输入每次在%c前面加一个' '
	printf("i = %d, c = %c, f = %f\n", i, c, f);
	return 0;
}