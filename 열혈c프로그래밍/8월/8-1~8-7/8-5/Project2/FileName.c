//����3 (��Ŭ���� ȣ����)
#include <stdio.h>
int main(void) {
	int num1, num2,temp;
	printf("�� ���� ���� �Է�:");
	scanf("%d %d", &num1, &num2);
	int max = num1, min = num2;
	if (num2 > max) max = num2;
	if (num1 < min) min = num1;
	while (min != 0) {
		temp = max%min;
		max = min;
		min = temp;
	}
	printf("�� ���� �ִ�����:%d", max);
	return 0;
}