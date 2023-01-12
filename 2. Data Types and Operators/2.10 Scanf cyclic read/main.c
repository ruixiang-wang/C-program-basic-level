#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 清空缓冲区 fflash(stdin) VS2012
// stdin 是标准输入

int main() {
	int i, ret;
	while (rewind(stdin), (ret = scanf("%d", &i)) != EOF) { // 行首输入ctrl+z+enter三次
		printf("i = %d\n", i);
	}
	return 0;
}