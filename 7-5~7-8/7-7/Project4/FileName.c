/*
계산기 만들기 1누르면 + 2누르면 - 3누르면 *
4누르면 / (소수점 없이) 5누르면 종료
결과는 누적됨 함수 사용
*/
#include <stdio.h>
int add(int first, int second);
int minus(int first, int second);
int mul(int first, int second);
int div(int first, int second);
int main() {
	int first, second,use,next,result;
	printf("2개의 수를 입력하세요 : ");
	scanf("%d %d", &first, &second);
	for (;;) {
		printf("기능을 입력하시오(1,2,3,4,5) :");
		scanf("%d", &use);
		if (use == 1) {
			printf("%d", add(first, second));
			result = add(first, second);
		}
		else if (use == 2) {
			printf("%d", minus(first, second));
			result = minus(first, second);
		}
		else if (use == 3) {
			printf("%d", mul(first, second));
			result = mul(first, second);
		}
		else if (use == 4) {
			printf("%d", div(first, second));
			result = div(first, second);
		}
		else if (use == 5) {
			printf("종료됨");
			return 0;
		}
		else {
			printf("입력오류");
			return 0;
		}
		printf("\n");
		printf("다음 숫자를 입력하시오 : ");
		scanf("%d", &next);
		first = result;
		second = next;
	}
}
int add(int first, int second) {
	int result;
	result = first + second;
	return result;
}
int minus(int first, int second) {
	int result;
	result = first - second;
	return result;
}
int mul(int first, int second) {
	int result;
	result = first * second;
	return result;
}
int div(int first, int second) {
	int result;
	result = first / second;
	return result;
}