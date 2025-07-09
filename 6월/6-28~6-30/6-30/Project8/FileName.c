//포인터 덧셈
#include <stdio.h>
int main() {
	int a;
	char b;
	double c;
	int* pa = &a;
	char* pb = &b;
	double* pc = &c;
	printf("pa의 값 %p \n", pa);
	printf("pa+1의 값 %p \n", pa + 1);
	printf("pb의 값 %p \n", pb);
	printf("pb+1의 값 %p \n", pb + 1);
	printf("pc의 값 %p \n", pc);
	printf("pc+1의 값 %p \n", pc + 1);
	return 0;
}