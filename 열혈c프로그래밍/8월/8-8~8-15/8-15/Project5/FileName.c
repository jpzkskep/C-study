#include <stdio.h>
int main(void) {
	printf("����1���� �Է��Ͻÿ�:");
	int input = getchar();
	if (input >= 97 && input <= 122) {	//�Է��� �ҹ���
		putchar(input-32);
	}
	else if (input >= 65 && input <= 90) {	//�Է��� �빮��
		putchar(input+32);
	}
	else {
		printf("�Է� ����");
	}
	return 0;
}