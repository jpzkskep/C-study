/*
세 개의 정수형 변수 x, y, z가 각각 2, 4, 6으로 초기화되어 있다.
포인터 p1, p2, p3와 포인터의 포인터 pp를 이용하여 다음 작업을 수행하라:

pp를 이용해 x의 값을 10 증가시키고,
pp를 이용해 y의 값을 x + z로 바꾸고,
pp를 이용해 z의 값을 y * 2로 바꾼다.

조건:
x, y, z는 직접 접근하지 말고,
반드시 포인터와 포인터의 포인터만을 이용해 수정할 것.
*/
#include <stdio.h>
int main() {
	int x=2, y=4, z=6;
	int** pp;
	int* p1 = &x;
	int* p2 = &y;
	int* p3 = &z;
	pp = &p1;
	**pp = x + 10;
	printf("x = %d \n", **pp);
	pp = &p2;
	**pp = x + z;
	printf("y = %d \n", **pp);
	pp = &p3;
	**pp = y * 2;
	printf("z = %d \n", **pp);
	return 0;
}