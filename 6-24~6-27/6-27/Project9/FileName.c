//����ڷκ��� ���� 1~3 �� �ϳ��� �Է¹޾�
// �Ʒ��� ���� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main() {
	int input;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input);
	switch (input) {
	case 1:
		printf("��� \n");
		break;
	case 2:
		printf("�ٳ��� \n");
		break;
	case 3:
		printf("���� \n");
		break;
	default:
		printf("����� \n");
		break;
	}
	return 0;
}