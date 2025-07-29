//상수 포인터
#include <stdio.h>
int main() {
	int x = 100, y = 200;
	const int* p1 = &x;
	int* const p2 = &y;
	const int* const p3 = &x;
	printf("*p1= %d \n", *p1);
	p1 = &y;
	printf("*p1= %d \n",*p1);
	*p1 = 1000;	//오류 const가 int왼쪽에 위치해서 값변경 불가
	printf("*p2= %d \n", *p2);
	*p2 = 300;
	printf(" * p2 = % d \n", *p2);
	p2 = &x;	//오류 const p2 (p2는 주소)const가 p2왼쪽에 위치해서 주소변경 불가
	printf("*p3= %d \n", *p3);
	*p3 = 500;	/* d오류 const가 int왼쪽에 위치해서 값 변경 불가 
	const p3 (p3는 주소)const가 p3왼쪽에 위치해서 주소변경 불가 */
	p3 = &y;
	return 0;
}