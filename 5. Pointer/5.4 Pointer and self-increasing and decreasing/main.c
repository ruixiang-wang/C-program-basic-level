#include <stdio.h>

int main() {

	int a[3] = { 2,7,8 };
	int* p;
	int j;
	p = a;
	j = *p++;
	//j = (*p)++;
	//j = *p; p++;
	//任何时候都是把后加加去掉，第二步看优先级是否高于++
	printf("a[0] = %d, j = %d, *p = %d\n", a[0], j, *p);
	j = p[0]++;
	printf("a[0] = %d, j = %d, *p = %d\n", a[0], j, *p);
	return 0;
}