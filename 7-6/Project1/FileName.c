/*
����ڷ� ����5 �����л��Ǽ���, ����, �����������Է¹޾Ƽ�
����̰������������� ����̰��峷���������
���ĵǾ�����ϵ����ϼ���. 
Ư��,�����������������̻��λ�� �����¡��հݡ�, 
�ƴѻ���������հݡ� ������ϰ��غ�����
*/
#include <stdio.h>
int average(int avr1, int avr2, int avr3);
int is_pass(int avr, int all);
int high_low(int* number);
int main() {
	int student[5][3];
	int avr[5];
	int all_avr;
	for (int i = 0; i < 5; i++) {
		printf("�л� %d�� ����,����,���� ������ �Է��Ͻÿ� : ",i+1);
		for (int j = 0; j < 3; j++) {
			scanf(" %d", &student[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		avr[i] = average(student[i][0],student[i][1],student[i][2]);
	}
	all_avr = (avr[0] + avr[1] + avr[2] + avr[3] + avr[4])/5;

	printf("��ü ��� : %d \n", all_avr);

	for (int i = 0; i < 5; i++) {
		printf("�л� %d�� ��� : %d ", i + 1, avr[i]);
		if (is_pass(avr[i], all_avr)) {
			printf(" �հ� \n");
		}
		else {
			printf( "���հ� \n");
		}
	}

	for (int i = 0; i < 5; i++) {
		high_low(avr);
	}

	for (int i = 0; i < 5; i++) {
		printf("�л�%d : %d�� ",i+1, avr[i]);
	}
	return 0;
}
int average(int avr1,int avr2, int avr3) {
	int avr;
	avr = (avr1+avr2+avr3) / 3;
	return avr;
}
int is_pass(int avr,int all) {
	if (avr >= all) {
		return 1;
	}
	else {
		return 0;
	}
}
int high_low(int *number) {
	int temp;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (number[j] > number[i]) {
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	return 0;
}