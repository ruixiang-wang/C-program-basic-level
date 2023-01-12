#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char c[20] = "wangdao";
	printf("sizeof(c) = %d\n", sizeof(c));
	printf("strlen(c) = %d\n", strlen(c)); // 不考虑'\0'
	char d[20];
	strcpy(d, c); // 有const修饰可以用字符串常量
	puts(d);
	printf("两个字符串比较的结果：%d\n", strcmp("hello", "how"));
	strcat(c, d);
	puts(c);
	return 0;
}