//n의값을 입력받아 1부터 n까지의 소수의 개수를 출력
#include <stdio.h>
int is_prime(int number) {
	int divide = 2;
	if (number < 2) {
		return 0;
	}
	else if (number == 2) {
		return 1;
	}
	for (divide; divide < number; divide++) {
		if (number % divide == 0) {
			return 0;
		}
	}
	return 1;
}
int prime_number(int number) {
	int numbers=0;
	for (int i = 2; i <= number; i++) {
		if (is_prime(i)) {
			numbers++;
		}
	}
	return numbers;
}
int main() {
	int n;
	printf("n을 입력하세요:");
	scanf("%d", &n);
	printf("1부터 %d까지의 소수의 개수는 %d개", n, prime_number(n));
	return 0;
}