//������ ����
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	printf("������ p�� ��� �ִ� �� : %p \n", p);
	printf("int ���� a�� ����� �ּ� : %p \n", &a);
	return 0;
}