// *������
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	*p = 3;
	printf("a�ǰ�: %d \n", a);
	printf("*p�ǰ�: %d \n", *p);
	return 0;
}