//����6(Ʋ��)
//����ڷκ��� �ʸ� �Է¹ް� ��,��,�� ���·� ���
#include <stdio.h>
int main(void) {
	int input;
	int hour, min, sec;
	printf("��(second)�Է�:");
	scanf("%d", &input);
	sec = input % 60;
	if (input / 360 < 360) {
		min = input % 60;
	}
	else min = input % 360;
	if (input % 3600 < 3600) {
		hour = input / 3600;
	}
	else hour = input / 3600;
	printf("%d�� %d�� %d��",hour,min, sec);
}