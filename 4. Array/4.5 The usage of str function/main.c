#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char c[20] = "wangdao";
	printf("sizeof(c) = %d\n", sizeof(c));
	printf("strlen(c) = %d\n", strlen(c)); // ������'\0'
	char d[20];
	strcpy(d, c); // ��const���ο������ַ�������
	puts(d);
	printf("�����ַ����ȽϵĽ����%d\n", strcmp("hello", "how"));
	strcat(c, d);
	puts(c);
	return 0;
}