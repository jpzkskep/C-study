//����4 (Ʋ��)
//�ݵ�� ����1���̻󱸸� �������� ����� ���� ����
#include <stdio.h>
int main(void) {
	int cream[3] = 500, cola[4] = 400, chip[2] = 700;
	int creamc = 1, colac = 1, chipc = 1;
	int left = 1900;
	printf("����� �����ϰ� �ִ� �ݾ� : 3500\n");
	for (int i = 0; i < 3; i++) {
		creamc = 2 + i;
		for (int j = 0; j < 4; j++) {
			colac = 2 + i;
			for (int k = 0; k < 2; k++) {
				chipc = 2 + i;
			}
		}
	}
}