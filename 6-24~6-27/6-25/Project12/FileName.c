//n줄인 역삼각형 출력,사용자로부터 임의의 n을 입력받음
#include <stdio.h>
int main() {
	int i, j, number;
	printf("몇줄인 삼각형 인가요?:");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2*(number-i+1)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}