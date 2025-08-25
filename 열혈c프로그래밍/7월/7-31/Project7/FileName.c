#include <stdio.h>
int main(void) {
	int input;
	printf("정수를 입력:");
	scanf("%d", &input);
	int result = ~input+1;
	printf("%d", result);
	return 0;
}