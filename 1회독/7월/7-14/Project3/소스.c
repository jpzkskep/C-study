//memmove �Լ�
#include <stdio.h>
#include <string.h>
int main() {
	char str[50] = "I love Chewing C hahaha";
	printf("%s \n", str);
	printf("memmove ���� \n");
	memmove(str + 23, str + 17, 6);
	printf("%s", str);
	return 0;
}