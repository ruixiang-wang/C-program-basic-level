#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 清空缓冲区 fflash(stdin) VS2012
// stdin 是标准输入

int main() {
	char c;
	while (scanf("%c", &c) != EOF) { // 行首输入ctrl+z+enter三次
		if (c != '\n') {
			printf("%c", c - 32);
		}
		else {
			printf("\n");
		}
	}
	return 0;
}