#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 15;
	if (3 < a && a < 10) {
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	// �жϸ����������� Ҫ�ý���
	float f = 23.56;
	if (f == 23.56) {
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	if (f - 23.56 < 0.00001 || f - 23.56 > - 0.00001) {  // ������λ
		printf("okay");
	}
	else {
		printf("wrong");
	}
	printf("\n");
	int i, j = 5;
	i = !!j;
	printf("i = %d", i);


	




}