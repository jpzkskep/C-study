#include <stdio.h>
/*
int main(void) {
	FILE* fp = fopen("simple.txt","wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("my name is hong\n", fp);
	fputs("your name is yoon\n", fp);
	fclose(fp);
	return 0;
}
*/
int main(void) {
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);
	return 0;
}