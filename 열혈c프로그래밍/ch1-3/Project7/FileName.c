#include <stdio.h>
int main(void) {
	int num1, num2, num3;
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d X %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
	return 0;
}