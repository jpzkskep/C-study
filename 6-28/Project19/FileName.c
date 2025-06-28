/*
정수 7개를 입력받아 그 중 홀수의 합을 출력하시오.
홀수가 하나도 없으면 "홀수가 없습니다."를 출력하시오.
*/
#include <stdio.h>
int main() {
	int input[7];
	int sum = 0;
	int ok = 0;
	printf("숫자를 입력하시오 : ");
	for (int i = 0; i <= 6; i++) {
		scanf("%d", &input[i]);
		if (input[i] % 2 == 1) {
			sum = sum + input[i];
			ok = 1;
		}
	}
	if (ok == 1) {
		printf("홀수의 합: %d", sum);
	}
	else {
		printf("홀수가 없습니다.");
	}
	return 0;
}