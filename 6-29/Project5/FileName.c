//5���� �л� ������ �Է¹޾� ����� ���ϰ�, 
// ��� �̻��� �л��� ������ ����ϴ� ���α׷��� �ۼ�
#include <stdio.h>
int main() {
	int score[5];
	float average;
	int sum=0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ���� : ", i + 1);
		scanf("%d", &score[i]);
		sum = sum + score[i];
	}
	average = (float)sum / 5;
	printf("��� : %.2f \n", average);
	printf("��� �̻��� ���� : ");
	for (int i = 0; i < 5; i++) {
		if (score[i] >= average) {
			printf("%d ", score[i]);
		}
	}
	return 0;
}