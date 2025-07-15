/*
정수형 변수 a를 선언하고, 그 값을 10으로 초기화하시오.

포인터 p는 a의 주소를 저장한다.

이중 포인터 pp는 포인터 p의 주소를 저장한다.

pp를 사용하여 변수 a의 값을 20으로 변경하시오.

마지막에 변수 a의 값을 출력하시오.
*/
#include <stdio.h>
int main() {
	int a = 10;
	int* p;
	int** pp;
	p = &a;
	pp = &p;
	**pp = 20;
	printf("a = %d", a);
	return 0;
}