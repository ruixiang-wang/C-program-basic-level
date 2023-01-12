#include<stdio.h>
int main() {
	int i = -1;
	int j;
	j = i++ > -1;// j = i > -1; i++; 后++ 拆成两步
	printf("i的字节数=%d \n", sizeof(i));
}