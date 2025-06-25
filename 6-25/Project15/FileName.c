//사용자로부터 n값을 입력받고 1부터 n까지의 곱 출력
#include <stdio.h>
int main() {
	int a;
	int n;
	int sum = 1;
	printf("n의 값을 입력하세요:");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		sum = sum * a;
	}
	printf("1부터 %d까지의 곱은 %d", n, sum);
	return 0;
}