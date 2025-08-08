#include <stdio.h>
void fibo(int n);
int main(void) {
	int n;
	printf("몇개의 피보나치 수열을 출력할건가요?:");
	scanf("%d", &n);
	fibo(n);
	return 0;
}
void fibo(int n) {
	int fibo[100] = { 0 };
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i < n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", fibo[i]);
	}
}