/*
������ ���� 3�� x, y, z�� �����ϰ�,
������ �ϳ��� ����ؼ� �� ������ ���� ������� ������ ���� �����Ͻÿ�.

x = 3

y = x + 7

z = y * 2

�׸��� ���������� x, y, z�� ���� ����Ͻÿ�
*/
#include <stdio.h>
int main() {
	int x = 0, y = 0, z = 0;
	int* p;
	p = &x;
	*p = 3;
	printf("x = %d \n", *p);
	p = &y;
	*p = x + 7;
	printf("y = %d \n", *p);
	p = &z;
	*p = y * 2;
	printf("z = %d \n", *p);
	return 0;
}