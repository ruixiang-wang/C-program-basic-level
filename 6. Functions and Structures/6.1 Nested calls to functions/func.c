#include <stdio.h>

int printstar(int i) {
	printf("***********************\n");
	printf("printstar %d\n", i);
	return i + 3;
}

void print_message() {
	printf("how do you do\n");
	printstar(3);
}
