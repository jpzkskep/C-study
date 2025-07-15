/*
다음 조건을 만족하는 프로그램을 작성하시오.
(단, 포인터 개념 1~4번을 바탕으로 직접 실습하며 확인하시오.)

조건:
정수형 변수 x와 y를 선언하고, 하나의 포인터 p를 사용하여 두 변수의 값을 각각 다음과 같이 수정하시오:

x = 100
y = x + 50

또 다른 포인터 const int* cp를 선언하고, x를 가리키게 한 후 *cp = 200을 시도했을 때 
어떤 문제가 발생하는지 직접 실험해보시오.

정수형 변수 z에 대해 int* const qp = &z; 와 같이 포인터를 선언하고, 
qp를 사용해 z = y - 20을 대입하시오. 이때 qp = &x;를 시도하면 
어떤 문제가 생기는지도 실험하시오.
*/
#include <stdio.h>
int main() {
	int x, y,z;
	int* p;
	const int* cp;
	int* const qp=&z;
	p = &x;
	*p = 100;
	printf("%d \n", *p);
	p = &y;
	*p = x + 50;
	printf("%d \n", *p);
	// *cp = 200;	안되는 이유는 const가 int왼쪽에 있어서 값 변경 불가이기 때문
	*qp = y - 20;
	printf("%d \n", *qp);
	// qp = &x;	안되는 이유는 const qp(qp는 주소)이기 때문에 주소 변경 불가이기 때문
	return 0;
}