//n줄인 삼각형 출력
#include <stdio.h>
int main() {
	int a, b, n;
	printf("n줄인 삼각형을 출력 : ");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		for (b = 1; b <= n - a; b++) {
			printf(" ");
		}
		for (b = 1; b <= 2*a-1; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}