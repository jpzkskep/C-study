//�л� ���� �м� ���α׷�
/*
2���� �л�, �� �л��� 3������ ������ �Է¹޴´�.
�Ʒ� ������ ����Ͻÿ�:

�� �л��� ������ ���

����(����, ����, ����) �ְ� ����

��ü ��� �̻��� ������ ���

*/
#include <stdio.h>
int main() {
	int score[2][3];
	float average;
	int sum = 0, sum1 = 0, sum2 = 0;
	int max;
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		printf("%d�� �л�:", i + 1);
		for (j = 0; j < 3; j++) {
			scanf(" %d", &score[i][j]);
			if (i == 0) {
				sum1 = sum1 + score[i][j];
			}
			else {
				sum2 = sum2 + score[i][j];
			}
		}
	}
	sum = sum1 + sum2;
	average = (float)sum / 6;
	printf("1�� �л� ���� : %d, ��� : %.2f \n", sum1, (float)sum1 / 3);
	printf("2�� �л� ���� : %d, ��� : %.2f \n", sum2, (float)sum2 / 3);
	printf("���� �ְ��� (��/��/��) : ");
	for (j = 0; j < 3; j++) {
		max = score[0][j];
		if (score[1][j] >= max) {
			max = score[1][j];
		}
		printf("%d ", max);
	}
	printf("\n");
	printf("��ü ��� : %.2f \n", average);
	printf("��ü ��� �̻� ����:");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (score[i][j] >= average) {
				printf(" %d", score[i][j]);
			}
		}
	}
}