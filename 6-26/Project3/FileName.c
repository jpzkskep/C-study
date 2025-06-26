//1000이하의 3또는 5의 배수인 자연수들의 합 구하기  //8분걸림
#include <stdio.h>
int main() {
	int a, sum = 0;
	for (a = 1; a <= 1000; a++) {
		if (a % 3 == 0 || a % 5 == 0) {
			sum = sum + a;
		}
	}
	printf("1000이하의 3또는 5의 배수인 자연수들의 합:%d", sum);
	return 0;
}