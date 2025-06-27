//임의의 자연수 n을 입력받아 n을 소인수 분해 한 결과를 출력
#include <stdio.h>
int main() {
	int n, divide = 2, first = 1;
	printf("임의의 자연수 n을 입력하시오 : ");
	scanf("%d", &n);
	printf("%d=", n);
	while (n > 1) {
		if (n % divide == 0) {
			if (!first) {
				printf("*");
			}
			printf("%d", divide);
			n = n / divide;
			first = 0;
		}
		else {
			divide++;
		}
	}
	return 0;
}