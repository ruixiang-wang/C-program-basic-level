#include <stdio.h>
#include <string.h>

void change(int *j) {
	*j = 5;
}

int main() {
	int i = 10;
	printf("i = %d\n", i);
	change(&i);
	printf("i = %d\n", i);
	return 0;
}