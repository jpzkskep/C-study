#include <stdio.h>	//Ʋ��
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
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("\n");
	printf("1���� %d������ �Ҽ��� ������ %d���Դϴ�.\n", n, count_primes(n));
	return 0;
}