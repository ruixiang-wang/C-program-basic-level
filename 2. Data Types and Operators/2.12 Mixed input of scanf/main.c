#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ջ����� fflash(stdin) VS2012
// stdin �Ǳ�׼����

int main() {
	int i;
	char c;
	float f;
	scanf("%d %c%f", &i, &c, &f); // �������ÿ����%cǰ���һ��' '
	printf("i = %d, c = %c, f = %f\n", i, c, f);
	return 0;
}