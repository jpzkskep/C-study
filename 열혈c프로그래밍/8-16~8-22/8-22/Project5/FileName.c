//틀림
#include <stdio.h>
#include <string.h>
long GetSize(FILE* fp);
int main(void) {
	char input[100];
	FILE* fp = fopen("text.txt", "rt");
	fgets(input, 100, fp);
	fputs(input, stdout);
	printf("파일의 크기: %ld \n", GetSize(fp));
	fgets(input, 100, fp);
	fputs(input, stdout);
	printf("파일의 크기: %ld \n", GetSize(fp));
	fgets(input, 100, fp);
	fputs(input, stdout);
	fclose(fp);
	return 0;
}
long GetSize(FILE* fp) {
	long fpos;
	long fsize;
	fpos = ftell(fp);
	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}