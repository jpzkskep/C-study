//�ڱ��ڽ��� ȣ���ϴ� �Լ��� �̿��ؼ� 1���� Ư���� �������� �� ���ϱ�
#include <stdio.h>
int main() {
	int n;
	printf("Ư����  �� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("%d", call(n));
	return 0;
}
int call(int number) {
	if (number <= 1) {
		return 1;
	}
	else {
		number = number * call(number - 1);
		return number;
	}
}