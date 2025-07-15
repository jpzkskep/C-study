/*
if (compare(str1,str2)) str1 과 str2가 같으면
실행 아니면 지나감 if문에서 0이 아닌값만 들어가면 무조건 참
*/
#include <stdio.h>
int compare(char* str, char* str2);
int main() {
	char str[20] = "hello every1";
	char str2[20] = "hello everyone";
	char str3[20] = "hello every1 hi";
	char str4[20] = "hello every1";
	if (compare(str, str2)) {
		printf("%s 와 %s 는 같다 \n", str, str2);
	}
	else {
		printf("%s 와 %s 는 다르다 \n", str, str2);
	}
	if (compare(str, str3)) {
		printf("%s 와 %s 는 같다 \n", str, str3);
	}
	else {
		printf("%s 와 %s 는 다르다 \n", str, str3);
	}
	if (compare(str, str4)) {
		printf("%s 와 %s 는 같다 \n", str, str4);
	}
	else {
		printf("%s 와 %s 는 다르다 \n", str, str4);
	}
	return 0;
}
int compare(char* str, char* str2) {
	while (*str) {
		if (*str != *str2) {
			return 0;
		}
		str++;
		str2++;
	}
	if (*str2 == '\0') {
		return 1;
	}
	return 0;
}