//���б� Ư�� �� Ư�� ���� �Ǻ� ���α׷�
#include <stdio.h>
int main() {
	float grade;
	int hour;
	char award;
	char license;
	int income;
	char sport;
	printf("���� ��� ����,����ð�,���� ���(Y/N),�ܱ��� �ڰ���(Y/N),�ҵ����(1~10),ü�� Ư���� ����(Y/N)�� �Է��ϼ���:");
	scanf("%f %d %c %c %d %c", &grade, &hour, &award, &license, &income, &sport);
	if (sport == 'Y') {
		if ((grade >= 70)&&(((grade>=95 && award=='Y') || ((income>=1 && income<=3) && (grade>=85)) || (license=='Y' && hour>=50)))) {
			printf("���б� ��� + Ư�� ���� ���");
		}
		else {
			printf("Ư�� ���� ���");
		}
	}
	else {
		if ((grade >= 95 && award == 'Y') || ((income >= 1 && income <= 3) && (grade >= 85)) || (license == 'Y' && hour >= 50)) {
			printf("���б� ���");
		}
		else {
			printf("�Ϲ� ���� ���� ����");
		}
	}
	return 0;
}