/*
�л� ���� ��� ���α׷�
�б����� 3���� �л��� �ְ�, �� �л��� 4���� ����(����, ����, ����, ����)�� ����. 
����ڷκ��� �� �л��� ������ �Է¹޾� ������ ����Ͻÿ�:
�� �л��� ������ ���
���� �ְ� ������ ���� ����
��ü ��� �̻��� ������ ���
�� �л��� ����� 90�� �̻��̸� "A", 80�� �̻��̸� "B", 
70�� �̻��̸� "C", �������� "F"�� ����� ����Ͻÿ�.
*/
#include <stdio.h>
int main() {
	int score[3][4];
	int total[3] = { 0 };
	float ave[3];
	int sum = 0;
	float average;
	int i, j;
	char result;
	int top, low;
	for (i = 0; i < 3; i++) {
		printf("%d�� �л� : ", i + 1);
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			total[i] += score[i][j];
		}
	}
	sum = total[0] + total[1] + total[2];
	for (i = 0; i < 3; i++) {
		ave[i] = (float)total[i] / 4;
		if (ave[i] >= 90) {
			result = 'A';
		}
		else if (ave[i] >= 80) {
			result = 'B';
		}
		else if (ave[i] >= 70) {
			result = 'C';
		}
		else {
			result = 'F';
		}

		printf("[%d] ����: %d, ���: %.2f �� ���: %c\n", i + 1, total[i], ave[i], result);
	}
	printf("\n[���� �ְ� ����]\n");
	for (j = 0; j < 4; j++) {
		top = score[0][j];
		for (i = 1; i < 3; i++) {
			if (score[i][j] > top) {
				top = score[i][j];
			}
		}
		printf("���� %d: %d\n", j + 1, top);
	}
	printf("\n[���� ���� ����]\n");
	for (j = 0; j < 4; j++) {
		low = score[0][j];
		for (i = 1; i < 3; i++) {
			if (score[i][j] < low) {
				low = score[i][j];
			}
		}
		printf("���� %d: %d\n", j + 1, low);
	}
	average = (float)sum / 12;
	printf("\n[��ü ��� �̻� ���� (%.2f �̻�)]\n", average);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (score[i][j] >= average) {
				printf("%d ", score[i][j]);
			}
		}
	}
	printf("\n");
	return 0;
}