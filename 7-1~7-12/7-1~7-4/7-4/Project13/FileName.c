//Ư���� �� n�� �Է¹޾� n�� ���μ������� ��� ���
#include <stdio.h>
int factorize(number) {
	int first = 1, divide = 2;
	printf("%d=", number);
	while (divide <= number) {
		if (number % divide == 0) {
			if (first) {
				printf("%d", divide);
				first = 0;
			}
			else {
				printf("*%d", divide);
			}
			number = number / divide;
		}
		else {
			divide++;
		}
	}
	return 0;
}
int main() {
	int n;
	printf("��� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	factorize(n);
}