//도전3 (유클리드 호제법)
#include <stdio.h>
int main(void) {
	int num1, num2,temp;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	int max = num1, min = num2;
	if (num2 > max) max = num2;
	if (num1 < min) min = num1;
	while (min != 0) {
		temp = max%min;
		max = min;
		min = temp;
	}
	printf("두 수의 최대공약수:%d", max);
	return 0;
}