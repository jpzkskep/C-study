#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
int main(void) {
	int num1, num2;
	printf("�� �� �Է�:");
	scanf("%d %d", &num1, &num2);
	printf("%d�� �� ū��", max(num1, num2));
	return 0;
}