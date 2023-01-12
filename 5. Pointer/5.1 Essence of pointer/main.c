#include <stdio.h>

int main() {
	int i = 5;
	int* p = &i;
	printf("i=%d\n", i);
	printf("p=%d\n", *p);
}