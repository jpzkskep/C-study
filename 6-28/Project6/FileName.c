/*
사용자가 정수 하나를 입력하면,
그 정수에 대해 다음과 같은 정보를 출력하는 프로그램을 작성하시오.

해당 숫자가 양수인지, 음수인지, 0인지 판별

해당 숫자가 짝수인지 홀수인지 판별

해당 숫자를 실수형으로 변환한 뒤, 1.5를 곱한 결과를 출력 (소수점 두 자리까지)

조건:

조건문(if, else if)을 적절히 사용할 것

형 변환은 명시적 타입 캐스팅 사용 ((float) 또는 (double) 등)

소수점 둘째 자리까지만 출력되도록 printf 형식 지정
*/

#include <stdio.h>
int main() {
	int input;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &input);
	if (input < 0) {
		printf("음수입니다. \n");
	}
	else if (input == 0) {
		printf("0입니다. \n");
	}
	else {
		printf("양수입니다. \n");
	}
	if (input % 2 == 0) {
		printf("짝수입니다. \n");
	}
	else {
		printf("홀수입니다. \n");
	}
	printf("%f * 1.5 = %.2f", (float)input, (float)input * 1.5);
	return 0;
}8wkd