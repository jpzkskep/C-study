//����7
//����ڷκ��� n�Է¹���, 2�� k���� n���� �۰ų� ������ �����ϴ� k�� �ִ� ���
#include <stdio.h>
int main(void) {
	int k = 0, n, number = 1;
	printf("��� n �Է�:");
	scanf("%d", &n);
	for (k = 0; number <= n; k++) {
		number = number * 2;
	}
	printf("������ �����ϴ� k�� �ִ��� %d", k-1);
	return 0;
}