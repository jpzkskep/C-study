//��ȯ��
#include <stdio.h>
int ret() {
	return 10000;
}
int main() {
	int a = ret();
	printf("ret() �Լ��� ��ȯ�� : %d \n", a);
	return 0;
}