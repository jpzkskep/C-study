/*
������ ���� a, b, c�� ���� 11, 22, 33���� �ʱ�ȭ�Ѵ�.

int* arr[3];�� �����ϰ�, a, b, c�� �ּҸ� ���� arr�� �����Ѵ�.

int** p = arr; ��� ������ ��, ���� ������ p�� �̿��� a, b, c�� ���� ��� ����϶�.
*/
#include <stdio.h>
int main() {
	int a = 11, b = 22, c = 33;
	int* arr[3];
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	int** p = arr;
	for (int i = 0; i < 3; i++) {
		printf("arr[%d]�� �� : %d \n", i, *(*(p + i)));
	}
	return 0;
}