#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ջ����� fflash(stdin) VS2012
// stdin �Ǳ�׼����

int main() {
	char c;
	while (scanf("%c", &c) != EOF) { // ��������ctrl+z+enter����
		if (c != '\n') {
			printf("%c", c - 32);
		}
		else {
			printf("\n");
		}
	}
	return 0;
}