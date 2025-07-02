/*

정수형 변수 a와 b를 선언하고,
포인터 p를 이용해 다음과 같은 순서로 작업하시오:

1. 변수 a에 5 저장
2. 변수 b에 10 저장
3. 포인터 p에 변수 a의 주소를 저장
4. *p를 이용해 변수 a의 값을 3 증가
5. 포인터 p에 변수 b의 주소를 저장
6. *p를 이용해 변수 b에 저장된 값에서 a를 뺀 값을 저장

마지막에 a, b의 값을 출력하시오.
*/
#include <stdio.h>
int main() {
	int a, b;
	int* p;
	a = 5;
	b = 10;
	p = &a;
	*p = a + 3;
	p = &b;
	*p = b - a;
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	return 0;
}