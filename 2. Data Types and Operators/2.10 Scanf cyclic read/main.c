#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ջ����� fflash(stdin) VS2012
// stdin �Ǳ�׼����

int main() {
	int i, ret;
	while (rewind(stdin), (ret = scanf("%d", &i)) != EOF) { // ��������ctrl+z+enter����
		printf("i = %d\n", i);
	}
	return 0;
}