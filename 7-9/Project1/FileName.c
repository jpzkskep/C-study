/*
int copy_str(char *dest,char *src;
src�� ���ڿ��� dest�� �����Ѵ�
�� dest�� ũ�Ⱑ �ݵ�� src���� Ŀ���Ѵ�
*/
#include <stdio.h>
int copy_str(char* dest, char* src);
int main() {
	char str1[] = "hello";
	char str2[] = "hi";
	printf("���� ���� : %s \n", str1);
	copy_str(str1, str2);
	printf("���� ���� : %s \n", str1);
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