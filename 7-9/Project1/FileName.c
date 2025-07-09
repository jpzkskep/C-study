/*
int copy_str(char *dest,char *src;
src의 문자열을 dest로 복사한다
단 dest의 크기가 반드시 src보다 커야한다
*/
#include <stdio.h>
int copy_str(char* dest, char* src);
int main() {
	char str1[] = "hello";
	char str2[] = "hi";
	printf("복사 이전 : %s \n", str1);
	copy_str(str1, str2);
	printf("복사 이후 : %s \n", str1);
	return 0;
}
int copy_str(char* dest, char* src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return 1;
}