#include <stdio.h>
int main() {
	char name[20];
	float kor;
	float math;
	float eng;
	float average;
	printf("�̸��� �Է��ϼ���:");
	scanf("%s", name);
	printf("���� ���� : ");
	scanf("%f", &kor);
	printf("���� ���� : ");
	scanf("%f", &math);
	printf("���� ���� : ");
	scanf("%f", &eng);
	average = (kor + math + eng) / 3;
	printf("%s���� ��� ������ %.6f�Դϴ�. \n", name, average);
	return 0;
}
