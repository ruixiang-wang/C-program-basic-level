#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char c[6] = { 'h', 'e', 'l', 'l', 'o' };
	char d[5] = "how";
	printf("%s----%s\n", c, d); //�ַ�����������ַ�������
	char e[20],f[20];
	scanf("%s%s", &e, &f);
	printf("e = %s\nf = %s", e, f);
}