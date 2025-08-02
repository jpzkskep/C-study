#include <stdio.h>
int main(void) {
	int num1, num2, big,small;
	printf("정수 2개를 입력하시오:");
	scanf("%d %d", &num1, &num2);
	big = num1;
	small = num2;
	if (num2 > big) {
		big = num2;
		small = num1;
	}
	printf("두수의 차:%d", big - small);
	return 0;
}