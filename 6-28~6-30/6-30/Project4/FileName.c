// *연산자
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	*p = 3;
	printf("a의값: %d \n", a);
	printf("*p의값: %d \n", *p);
	return 0;
}