//에라토스테네스의 체를 이용하여 1부터 n까지의 소수를 구하는 프로그램
#include <stdio.h>
int che(int first, int second);
int main() {
	int n;
	printf("n을 입력하세요 : ");
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
	printf("1부터 %d까지의 소수 ",second);
	for (i = 2; i <= second; i++) {
		if (prime[i] == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}