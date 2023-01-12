#include <stdio.h>

int i = 10;

void printi(int a) {
	printf("i = %d\n", i);
}

int main() {
	printf("i = %d\n", i);
	i = 5;
	printi(i);
	printf("i = %d\n", i);
}