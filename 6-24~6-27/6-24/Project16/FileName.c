/*숫자 크기 비교*/
#include <stdio.h>
int main() {
	float first;
	float second;
	printf("정수 2개를 입력하시오:");
	scanf("%f %f", &first, &second);
	if (first > second) {
		printf("첫 번째 수가 더 큽니다.");
	}
	else if (first < second) {
		printf("두 번째 수가 더 큽니다.");
	}
	else if (first == second) {
		printf("두 수는 같습니다.");
	}
	return 0;
}