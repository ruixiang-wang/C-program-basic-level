#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 清空缓冲区 fflash(stdin) VS2012
// stdin 是标准输入

int main() {
	printf("name = %s, age = %-3d, sex = %c, score = %6.2f\n", "longge", 34, 'm', 100.0);
	return 0;
}