//�����佺�׳׽��� ü�� �̿��Ͽ� 1���� n������ �Ҽ��� ���ϴ� ���α׷�
#include <stdio.h>
int che(int first, int second);
int main() {
	int n;
	printf("n�� �Է��ϼ��� : ");
	scanf("%d", &n);
	che(1, n);
	return 0;
}
int che(int first, int second) {
	int prime[1000] = { 0 };
	int i, j;
	prime[0] = 1;
	prime[1] = 1;
	for (i = 2; i <= second; i++) {
		if (prime[i] == 0) {
			for (j = i * 2; j <= second; j = j + i) {
				prime[j] = 1;
			}
		}
	}
	printf("1���� %d������ �Ҽ� ",second);
	for (i = 2; i <= second; i++) {
		if (prime[i] == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}