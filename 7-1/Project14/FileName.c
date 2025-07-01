/*
정수형 변수 3개 x, y, z를 선언하고,
포인터 하나를 사용해서 세 변수의 값을 순서대로 다음과 같이 변경하시오.

x = 3

y = x + 7

z = y * 2

그리고 마지막에는 x, y, z의 값을 출력하시오
*/
#include <stdio.h>
int main() {
	int x = 0, y = 0, z = 0;
	int* p;
	p = &x;
	*p = 3;
	printf("x = %d \n", *p);
	p = &y;
	*p = x + 7;
	printf("y = %d \n", *p);
	p = &z;
	*p = y * 2;
	printf("z = %d \n", *p);
	return 0;
}