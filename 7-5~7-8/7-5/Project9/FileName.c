//���� 10���� �Է¹ް� �� ���Ҹ� ū������ ����ϴ� �Լ� �����   Ʋ��
#include <stdio.h>
// �迭�� ������������ �����ϴ� �Լ� (int�� ���������� ������ �ǹ� ����)
int sort_desc(int* arr, int size) {
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0; // ���ĸ� �ϰ� ����� �迭�� �ݿ���
}

int main() {
	int input[10];
	int i;

	printf("10���� ������ �Է��Ͻÿ�: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}

	sort_desc(input, 10); // ���� ����

	printf("ū ������� ���: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", input[i]);
	}
	return 0;
}