#include <stdio.h>
int main(void) {
	int input[10];
	int div0num = 0;
	int div1num = 0;
	int hol[10];
	int chak[10];
	int temp;
	int idx1 = 0;
	int idx2 = 0;
	for (int i = 0; i < 10; i++) {
		printf("�Է�:");
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (input[i] % 2 == 1) {
			div1num++;
			hol[idx1] = input[i];
			idx1++;
		}
		else if (input[i] % 2 == 0) {
			div0num++;
			chak[idx2] = input[i];
			idx2++;
		}
	}
	for (int i = 0; i < div1num; i++) {			//Ȧ�� ����
		for (int j = 0; j < div1num; j++) {
			if (hol[i] > hol[j]) {
				temp = hol[i];
				hol[i] = hol[j];
				hol[j] = temp;
			}
		}
	}
	for (int i = 0; i < div0num; i++) {			//¦�� ���� (��¶����� Ȧ�����İ� �����ϰ� ��)
		for (int j = 0; j < div0num; j++) {
			if (chak[i] > chak[j]) {
				temp = chak[i];
				chak[i] = chak[j];
				chak[j] = temp;
			}
		}
	}
	for (int i = 0; i < div1num; i++) {
		input[i] = hol[i];
	}
	for (int i = 0; i < div0num; i++) {
		input[9 - i] = chak[i];
	}
	printf("�迭 ����� ��� : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", input[i]);
	}
	return 0;
	
}