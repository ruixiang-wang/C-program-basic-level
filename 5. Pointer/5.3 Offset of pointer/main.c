#include <stdio.h>

int main() {
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("*p = %d\n", *p);
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p + i));
	}
}