//������
#include <stdio.h>
int main() {
	int input;
	printf("������ \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");
	scanf("%d", &input);
	if (input == 1) {
		printf("���� ���־� \n");
	}
	else if (input == 2) {
		printf("���� �ÿ��� \n");
	}
	else if (input == 3) {
		printf("zzz \n");
	}
	else {
		printf("���� ������� �� �˾� ��ھ� \n");
	}
	return 0;
}
