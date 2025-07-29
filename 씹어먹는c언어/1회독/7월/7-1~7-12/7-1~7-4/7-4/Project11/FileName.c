#include <stdio.h>
int factorize(int number) {
	printf("%d=", number);
	int first = 1;
	for (int i = 2; i <= number; i++) {
		while (number % i == 0) {
			if (first) {
				printf("%d", i);
				first = 0;
			}
			else {
				printf("×%d", i);
			}
			number = number / i;
		}
	}
	return 0; 
}
int main() {
	int num;
	printf("n을 입력하시오 : ");
	scanf("%d", &num);
	factorize(num); 
	return 0;
}