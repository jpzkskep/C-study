#include <stdio.h>
int main(void) {
	int input[5];
	int max, min, sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력하시오:",i+1);
		scanf("%d", &input[i]);
	}
	max = input[0];
	min = input[0];
	for (int i = 0; i < 5; i++) {
		sum += input[i];
		if (input[i] > max) max = input[i];
		if (input[i] < min) min = input[i];
	}
	printf("최댓값:%d\n", max);
	printf("최솟값:%d\n", min);
	printf("합계:%d", sum);
	return 0;
}