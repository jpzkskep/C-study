// *������ �̿�
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	a = 2;
	printf("a�ǰ�:%d \n", a);
	printf("*p�� ��:%d \n", *p);
	return 0;
}