//���� if��
#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;
	printf("����,����,����,���� ������ ���� �Է����ּ���:");
	scanf("%f %f %f %f", &math, &english, &science, &programming);
	ave_score = (math + english + science + programming) / 4;	//4������ ���
	printf("����� ������ %f�Դϴ�. \n", ave_score);
	if (ave_score >= 90) {
		printf("����� ���� �Դϴ�. \n");
	}
	else if (ave_score >= 30) {
		printf("���ݸ� ����ϼ���. \n");
	}
	else {
		printf("���θ� �߷� �մϱ�? \n");
	}
	return 0;
}