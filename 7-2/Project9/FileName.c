/*
정수형 변수 a, b, c가 각각 10, 20, 30으로 초기화되어 있다.
포인터 p1, p2, p3와 포인터의 포인터 pp를 선언하여
다음 작업을 수행하라:

pp를 이용해 a의 값을 a + b로 바꾼다.
pp를 이용해 b의 값을 a - c로 바꾼다. (단, 이때 a는 이미 1번에서 바뀐 값이다.)
pp를 이용해 c의 값을 a + b + c로 바꾼다. (a, b 모두 바뀐 상태로 계산해야 한다.)

a, b, c는 직접 사용하지 말고,
반드시 포인터와 포인터의 포인터만을 이용해 접근하고 수정할 것.
중간에 pp를 &p1, &p2, &p3로 바꾸면서 사용해도 된다.
*/
#include <stdio.h>
int main() {
	int a = 10, b = 20, c = 30;
	int* p1 = &a;
	int* p2 = &b;
	int* p3 = &c;
	int** pp;
	pp = &p1;
	**pp = **pp + *p2;
	printf("a = %d \n", **pp);
	pp = &p2;
	**pp = *p1 - *p3;
	printf("b = %d \n", **pp);
	pp = &p3;
	**pp = *p1 + *p2 + *p3;
	printf("c = %d \n", **pp);
	return 0;
}