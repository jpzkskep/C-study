/*
���� 7���� �Է¹޾� �� �� Ȧ���� ���� ����Ͻÿ�.
Ȧ���� �ϳ��� ������ "Ȧ���� �����ϴ�."�� ����Ͻÿ�.
*/
#include <stdio.h>
int main() {
	int input[7];
	int sum = 0;
	int ok = 0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	for (int i = 0; i <= 6; i++) {
		scanf("%d", &input[i]);
		if (input[i] % 2 == 1) {
			sum = sum + input[i];
			ok = 1;
		}
	}
	if (ok == 1) {
		printf("Ȧ���� ��: %d", sum);
	}
	else {
		printf("Ȧ���� �����ϴ�.");
	}
	return 0;
}