#include <stdio.h>

#define N 5

void print(int b[], int len) { //元素个数不能传递
	int i;
	for (i = 0; i < len; i++) {
		printf("a[%d] = %d  ",i, b[i]);
	}
	b[4] = 20; // 可以修改a数组的值
}
int main() {
	int j = 10;
	int a[N] = { 1,3,5,7,9 };
	int i = 3;
	// a[5] = 20; // 访问越界非常危险
	print(a, N);
	printf("a[4]=%d", a[4]);
}


