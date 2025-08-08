//도전2
//2개의 수를 입력받아 두수 사이의 구구단을 출력
#include <stdio.h>
int main(void) {
	int num1, num2;
	printf("숫자 2개를 입력하시오:");
	scanf("%d %d", &num1, &num2);
	int max = num2, min = num1;
	if (num1 > max) max = num1, min = num2;
	for (int i = min; i <= max; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}