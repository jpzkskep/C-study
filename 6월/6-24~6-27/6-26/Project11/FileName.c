// 1���� n������ Ȧ�� ������ �� ���ϱ�
#include <stdio.h>
int main() {
	int n,count=0,sum=0;
	printf("n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			count++;
			sum = sum + i;
		}
	}
	printf("Ȧ���� ���� : %d \n",count);
	printf("Ȧ���� �� : %d \n", sum);
}