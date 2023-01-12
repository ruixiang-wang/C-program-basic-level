#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

char* print_stack()
{
	char c[] = "I am print_stack";
	puts(c);
	return c;
}
char* print_malloc()
{
	char* c = (char*)malloc(30);
	strcpy(c, "I am print_malloc");
	puts(c);
	return c;
}

int main() {
	char* p;
	p = print_stack();
	//puts(p);
	p = print_malloc();
	puts(p);
	return 0;
}