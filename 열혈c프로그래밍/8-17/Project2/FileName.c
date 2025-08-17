#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];
	fputs("str1의 문자를 입력하시오:", stdout);
	fgets(str1, sizeof(str1), stdin);
	int len1 = strlen(str1);
	str1[len1 - 1] = 0;
	fputs("str2의 문자를 입력하시오:", stdout);
	fgets(str2, sizeof(str2), stdin);
	int len2 = strlen(str2);
	str2[len2 - 1] = 0;
	strcpy(str3, str1);
	strcat(str3, str2);
	printf("%s", str3);
	return 0;
}