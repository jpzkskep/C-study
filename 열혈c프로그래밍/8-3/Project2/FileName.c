#include <stdio.h>
int max(int first ,int second ,int thrid);
int min(int first, int second, int third);
int main(void) {
	int num1, num2, num3;
	printf("세 수를 입력하시오:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수:%d\n", max(num1, num2, num3));
	printf("가장 작은 수:%d\n", min(num1, num2, num3));
	return 0;
}
int max(int first, int second, int third) {
	int max = first;
	if (second > max) max = second;
	if (third > max) max = third;
	return max;
}
int min(int first, int second, int third) {
	int min = first;
	if (second < min) min = second;
	if (third < min) min = third;
	return min;
}