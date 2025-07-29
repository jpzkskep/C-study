//포인터의 덧셉
#include <stdio.h>
int main() {
	int a;
	int* pa;
	pa = &a;
	printf("pa의 값 : %p\n", pa);
	printf("(pa+1)의 값 : %p\n", pa + 1);
	return 0;
}