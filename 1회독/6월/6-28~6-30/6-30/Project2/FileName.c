//포인터 시작
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	printf("포인터 p에 들어 있는 값 : %p \n", p);
	printf("int 변수 a가 저장된 주소 : %p \n", &a);
	return 0;
}