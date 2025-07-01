/*
정수형 변수 2개를 선언하고, 포인터를 이용해서

하나의 포인터로 두 변수의 값을 각각 바꾸고

최종적으로 두 변수의 값을 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
int main() {
	int a = 10, b = 20;
	int* c = &a;
	printf("a = %d \n", a * (*c));
	printf("b = %d \n", b * (*c));
	return 0;
}