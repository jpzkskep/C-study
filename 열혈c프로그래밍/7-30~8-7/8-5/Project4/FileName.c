//도전5
//10개의 소수를 출력하는 프로그램
#include <stdio.h>
int main(void) {
	int num[101];
	int prime[101] = { 0 };
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		num[i] = i;
	}
	prime[2] = 1;
	for (int i = 3; i <= 100; i++) {
		for (int j = 2; j < num[i]; j++) {
			if (num[i] % j != 0) {
				prime[i] = 1;
			}
			if (num[i] % j == 0) {
				prime[i] = 0;
				break;
			}
		}
	}
	for (int i = 1; i <= 100; i++) {
		if (prime[i]) count++;
		if (prime[i]==1 && count<11) printf("%d ", num[i]);
	}
	return 0;
}