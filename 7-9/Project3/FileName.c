/*
if (compare(str1,str2)) str1 �� str2�� ������
���� �ƴϸ� ������ if������ 0�� �ƴѰ��� ���� ������ ��
*/
#include <stdio.h>
int compare(char* str, char* str2);
int main() {
	char str[20] = "hello every1";
	char str2[20] = "hello everyone";
	char str3[20] = "hello every1 hi";
	char str4[20] = "hello every1";
	if (compare(str, str2)) {
		printf("%s �� %s �� ���� \n", str, str2);
	}
	else {
		printf("%s �� %s �� �ٸ��� \n", str, str2);
	}
	if (compare(str, str3)) {
		printf("%s �� %s �� ���� \n", str, str3);
	}
	else {
		printf("%s �� %s �� �ٸ��� \n", str, str3);
	}
	if (compare(str, str4)) {
		printf("%s �� %s �� ���� \n", str, str4);
	}
	else {
		printf("%s �� %s �� �ٸ��� \n", str, str4);
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