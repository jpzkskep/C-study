#include <stdio.h>

char* readname(void);

int main(void) {
	char* name1;
	char* name2;
	name1 = readname();
	printf("name1:%s\n", name1);
	name2 = readname();
	printf("name2:%s\n", name2);
	return 0;
}

char* readname(void) {
	char name[30];
	printf("what is your name?");
	gets(name);
	return name;
}