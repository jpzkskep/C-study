#include <stdio.h>
int main(void) {
	int input;
	int hour, min, sec;
	printf("�ʸ� �Է��Ͻÿ�:");
	scanf("%d", &input);
	sec = input % 60;
	min = (input % 3600) / 60;
	hour = input / 3600;
	printf("%d�� %d�� %d��", hour, min, sec);
	return 0;
}