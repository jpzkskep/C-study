//n���� ���ﰢ�� ���,����ڷκ��� ������ n�� �Է¹���
#include <stdio.h>
int main() {
	int i, j, number;
	printf("������ �ﰢ�� �ΰ���?:");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2*(number-i+1)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}