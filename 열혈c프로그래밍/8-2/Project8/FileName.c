#include <stdio.h>
int main(void) {
	int num1, num2, big,small;
	printf("���� 2���� �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);
	big = num1;
	small = num2;
	if (num2 > big) {
		big = num2;
		small = num1;
	}
	printf("�μ��� ��:%d", big - small);
	return 0;
}