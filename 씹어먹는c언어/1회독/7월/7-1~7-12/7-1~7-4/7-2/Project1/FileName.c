/*
int a = 5, b = 10; 이라는 두 정수가 있다.

포인터 int* p; 하나만 사용해서 a와 b의 값을 서로 바꾸시오.

*p, &, 임시 변수 등을 이용하고, 대괄호 []나 함수 호출은 금지.

a = b; b = a; 같이 직접 접근하지 않고 반드시 포인터를 통해 바꿀 것.
*/
#include <stdio.h>
int main() {
	int x = 3, y = 7;
	int* p;
	p = &x;
	*p = x+2;
	printf("x = %d \n", *p);
	p = &y;
	*p = x * x;
	printf("y = %d \n", *p);
	return 0;
}