//���� ���ϱ�
#include <stdio.h>
int main() {
	char input;
	printf("(�ҹ���) ���ĺ� �б� \n");
	printf("���ĺ� : ");
	scanf("%c", &input);
	switch (input) {
	case 'a':
		printf("���� \n");
		break;
	case 'b':
		printf("�� \n");
		break;
	case 'c':
		printf("�� \n");
		break;
	default:
		printf("�˼��ؿ� �Ӹ��� ������ �� �о��");
		break;
	}
	return 0;
}