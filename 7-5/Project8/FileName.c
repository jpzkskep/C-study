//c�� �������� �ƴ��� �Ǻ�
#include <stdio.h>
int isdigit(char c);
int main() {
	char input;
	scanf("%c", &input);
	if (isdigit(input)) {
		printf("%c�� ���� �Դϴ� \n", input);
	}
	else {
		printf("%c�� ���ڰ� �ƴմϴ� \n", input);
	}
	return 0;
}
int isdigit(char c) {
	if (48 <= c && c <= 57) {	//�ƽ�Ű �ڵ� 48-57�� ����
		return 1;
	}
	else {
		return 0;
	}
}