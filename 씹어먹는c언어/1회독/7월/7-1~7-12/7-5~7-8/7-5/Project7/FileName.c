//�Է¹��� �迭�� 10���� ���ҵ� �� �ִ밪�� ���
#include <stdio.h>
//max_number ���ڷ� ���޹��� ũ�� 10�� �迭�κ��� �ִ밪�� ���ϴ� �Լ�
int max_number(int* parr);
int main() {
	int arr[10];
	int i;
	//����ڷκ��� ���Ҹ� �Է¹���
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("�Է��� �迭 �� ���� ū �� : %d \n", max_number(arr));
	return 0;
}
int max_number(int* parr) {
	int i;
	int max = parr[0];
	for (i = 1; i < 10; i++) {
		if (parr[i] > max) {
			max = parr[i];
		}
	}
	return max;
}