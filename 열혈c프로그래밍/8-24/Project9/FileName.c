#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
int main(void) {
	int num1, num2;
	printf("두 수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d가 더 큰수", max(num1, num2));
	return 0;
}