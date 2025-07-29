/* 사용자로부터 3가지를 입력받아 계산기 기능을 수행하는 프로그램을 작성
1. 정수 1개
2. 연산자 1개 (+,-,*,/,!)
3.정수 1개 (단 ! 연산자는 두번째 숫자를 입력받지 않음
*/
#include <stdio.h>
int main() {
	int first, second,i,result=0;
	char operator;
	printf("첫 번째 숫자 입력 : ");
	scanf(" %d", &first);
	printf("연산자 입력 (+ - * / !): ");
	scanf(" %c", &operator);
	if (operator=='!') {
		if (first < 0) {
			printf("음수는 팩토리얼을 계산할 수 없습니다");
		}
		else {
			result = 1;
			for (i = 1; i <= first; i++) {
				result = result * i;
			}
			printf("%d! = %d", first, result);
		}
	}
	else {
		printf("두 번째 숫자 입력 : ");
		scanf(" %d", &second);
		switch (operator) {
		case '+':
			result = first + second;
			printf("출력: %d+%d=%d", first, second, result);
			break;
		case '-':
			result = first - second;
			printf("출력: %d-%d=%d", first, second, result);
			break;
		case '*':
			result = first * second;
			printf("출력: %d*%d=%d", first, second, result);
			break;
		case '/':
			if (second == 0) {
				printf("0으로 나눌 수 없습니다");
				break;
			}
			else {
				result = first / second;
				printf("출력: %d/%d=%d", first, second, result);
				break;
			}
		default:
			printf("지원하지 않는 연산자입니다");
		}
	}
	return 0;
}