//��������
#include <stdio.h>
int magicbox(user_input) {
	user_input += 4;
	return user_input;
}
int main() {
	int user_input;
	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &user_input);
	printf("������ %d �� 4�� ���� ����� %d �Դϴ�.",user_input, magicbox(user_input));
	return 0;
}