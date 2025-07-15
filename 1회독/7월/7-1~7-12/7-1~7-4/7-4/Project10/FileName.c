#include <stdio.h>	//틀림
int is_prime(int num) {
	if (num < 2) return 0; 
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0; 
	}
	return 1;  
}
int count_primes(int n) {
	int count = 0;
	for (int i = 2; i <= n; i++) {
		if (is_prime(i)) {
			count++;
		}
	}
	return count;
}
int main() {
	int n;
	printf("n의 값을 입력하시오 : ");
	scanf("%d", &n);
	printf("\n");
	printf("1부터 %d까지의 소수의 개수는 %d개입니다.\n", n, count_primes(n));
	return 0;
}