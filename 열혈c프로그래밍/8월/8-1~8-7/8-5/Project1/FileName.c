//����2
//2���� ���� �Է¹޾� �μ� ������ �������� ���
#include <stdio.h>
int main(void) {
	int num1, num2;
	printf("���� 2���� �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);
	int max = num2, min = num1;
	if (num1 > max) max = num1, min = num2;
	for (int i = min; i <= max; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}