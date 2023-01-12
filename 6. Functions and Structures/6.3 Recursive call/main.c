#include <stdio.h>

int f(int n) {
	if (n == 1) {
		return 1;
	}
	return n * f(n - 1);
}

int main() {
	int n = 5;
	int res = f(n);
	printf("res = %d", res);
	return 0;
}