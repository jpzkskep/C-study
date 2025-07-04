//특정한 수 n을 입력받아 n을 소인수분해한 결과 출력
#include <stdio.h>
int factorize(number) {
	int first = 1, divide = 2;
	printf("%d=", number);
	while (divide <= number) {
		if (number % divide == 0) {
			if (first) {
				printf("%d", divide);
				first = 0;
			}
			else {
				printf("*%d", divide);
			}
			number = number / divide;
		}
		else {
			divide++;
		}
	}
	return 0;
}
int main() {
	int n;
	printf("어떤수 n을 입력하시오 : ");
	scanf("%d", &n);
	factorize(n);
}