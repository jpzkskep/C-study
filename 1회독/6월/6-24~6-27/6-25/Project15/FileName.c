//����ڷκ��� n���� �Է¹ް� 1���� n������ �� ���
#include <stdio.h>
int main() {
	int a;
	int n;
	int sum = 1;
	printf("n�� ���� �Է��ϼ���:");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		sum = sum * a;
	}
	printf("1���� %d������ ���� %d", n, sum);
	return 0;
}