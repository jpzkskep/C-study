//도전7
//사용자로부터 n입력받음, 2의 k승이 n보다 작거나 같은게 성립하는 k의 최댓값 계산
#include <stdio.h>
int main(void) {
	int k = 0, n, number = 1;
	printf("상수 n 입력:");
	scanf("%d", &n);
	for (k = 0; number <= n; k++) {
		number = number * 2;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k-1);
	return 0;
}