#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
	char* p = "hello";
	char c[10] = "hello"; // �൱�� strcpy(c, "hello")
	c[0] = 'H';
	// p[0] = 'H' // ��Ч �쳣����Ϊ�����޸ĳ�����
	printf("c[0] = %c\n", c[0]);
	printf("p[0] = %c\n", p[0]);
	p = "world";
	// c = "world"; // ������У���Ϊc�ǵ�ַ���������¸�ֵ��
	return 0;
}