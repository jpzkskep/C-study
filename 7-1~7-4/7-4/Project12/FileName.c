//n�ǰ��� �Է¹޾� 1���� n������ �Ҽ��� ������ ���
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
	printf("n�� �Է��ϼ���:");
	scanf("%d", &n);
	printf("1���� %d������ �Ҽ��� ������ %d��", n, prime_number(n));
	return 0;
}