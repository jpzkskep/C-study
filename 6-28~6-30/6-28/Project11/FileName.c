//�Ҽ� ���α׷�
#include <stdio.h>
int main() {
	int guess = 5;	//�Ǻ��ϰ� �ִ� �Ҽ��� ��
	int prime[1000];	//������� ã�� �Ҽ��ǰ���-1 �Ʒ� �ΰ��� �Ҽ��� �̸� ã������ �ʱⰪ�� 1
	int index = 1;	//for�� ����
	int i;	//�Ҽ����� �Ǻ��� ���� ���̴� ����
	int ok;	//ó�� �� �Ҽ��� Ư���� ���
	prime[0] = 2;
	prime[1] = 3;
	for (;;) {
		ok = 0;
		for (i = 0; i <= index; i++) {
			if (guess % prime[i] != 0) {
				ok++;
			}
			else {
				break;
			}
		}
		if (ok == (index + 1)) {
			index++;
			prime[index] = guess;
			printf("�Ҽ�: %d \n", prime[index]);
			if (index == 999) {
				break;
			}
		}
		guess = guess + 2;
	}
	return 0;
}