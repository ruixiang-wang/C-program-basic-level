#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int i;
	scanf("%d", &i);
	char* p;
	p = (char*)malloc(i);
	strcpy(p, "malloc success");
	puts(p);
	free(p);
	p = NULL;
	return 0;
}