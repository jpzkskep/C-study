//�����͸� �Լ���
#include <stdio.h>
int change_val(int* pi) {
	printf("change_val �Լ� �ȿ��� \n");
	printf("pi�� �� : %p \n", pi);
	printf("pi�� ����Ű�� ���� �� : %d \n", *pi);
	*pi = 3;
	printf("change_val �Լ� �� \n");
	return 0;
}
int main() {
	int i = 0;
	printf("i ������ �ּҰ� : %p \n", &i);
	printf("ȣ�� ���� i�� �� : %d \n", i);
	change_val(&i);
	printf("ȣ�� ���� i�� �� : %d \n", i);
	return 0;
}