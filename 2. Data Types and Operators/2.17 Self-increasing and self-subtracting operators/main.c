#include<stdio.h>
int main() {
	int i = -1;
	int j;
	j = i++ > -1;// j = i > -1; i++; ��++ �������
	printf("i���ֽ���=%d \n", sizeof(i));
}