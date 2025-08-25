#include <stdio.h>
int main(void) {
	int count = 0;
	int idx = 0;
	char input[100];
	printf("문자열을 입력하시오:");
	scanf("%s", input);
	while (input[idx] != '\0') {
		count++;
		idx++;
	}
	printf("문자열의 길이:%d", count);
	return 0;
}