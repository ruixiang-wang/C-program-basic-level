#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c[20]; // c == &c[0] �ַ�ָ��
	gets(c);
	puts(c);
	return 0;
}