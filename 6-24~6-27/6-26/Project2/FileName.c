//n���� ���ﰢ�� ��� �ϱ�  //5�аɸ�
#include <stdio.h>
int main() {
	int a, b, n;
	printf("n���� �ﰢ��:");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		for (b = 1; b <= a; b++) {
			printf(" ");
		}
		for (b = 1; b <= 2*(n-a)+1; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}