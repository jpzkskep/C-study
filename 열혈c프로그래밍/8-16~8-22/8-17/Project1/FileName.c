#include <stdio.h>
#include <string.h>
int main(void) {
	char input[50];
	int sum = 0;
	printf("문자열을 입력하시오:");
	fgets(input, sizeof(input), stdin);
	int len = strlen(input);
	for (int i = 0; i < len; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			sum = sum + (input[i] - '0');
		}
	}
	printf("%d", sum);
	return 0;
}