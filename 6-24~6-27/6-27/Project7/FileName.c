//������ switch��
#include <stdio.h>
int main() {
	int input;
	printf("������ ���׷��̵� \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");
	scanf("%d", &input);
	switch (input) {
	case 1:
		printf("���� ���־� \n");
		break;
	case 2:
		printf("���� �ÿ��� \n");
		break;
	case 3:
		printf("zzz \n");
		break;
	default:
		printf("���� ������� �� �˾� ��ھ� \n");
		break;
	}
	return 0;
}