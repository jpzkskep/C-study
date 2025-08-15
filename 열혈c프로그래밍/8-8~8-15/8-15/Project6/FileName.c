#include <stdio.h>
int main(void) {
	char* str = "simple string";
	printf("puts test\n");
	puts(str);
	puts("so simple string");
	printf("fputs test\n");
	fputs(str, stdout); printf("\n");
	fputs("so simple string", stdout); printf("\n");
	return 0;
}