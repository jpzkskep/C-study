//����4
//�ּ� 1�� �̻� ��ٰ� �����ϰ� �������� ����� �� ����
#include <stdio.h>
int main(void) {
	int money = 3500, cream = 500, chip = 700, cola = 400;
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500\n");
	int left = money - cream - chip - cola;	//�ּ� 1���̻� ��� ��� (left=1900)
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				if (cream * i + chip * j + cola * k == 1900) {
					printf("ũ����:%d �����:%d �ݶ�:%d\n", i + 1, j + 1, k + 1);
				}
			}
		}
	}
	return 0;
}