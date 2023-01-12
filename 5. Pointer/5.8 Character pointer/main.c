#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
	char* p = "hello";
	char c[10] = "hello"; // 相当于 strcpy(c, "hello")
	c[0] = 'H';
	// p[0] = 'H' // 无效 异常，因为不能修改常量区
	printf("c[0] = %c\n", c[0]);
	printf("p[0] = %c\n", p[0]);
	p = "world";
	// c = "world"; // 这个不行，因为c是地址，不能重新赋值；
	return 0;
}