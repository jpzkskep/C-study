#include <stdio.h>
int add(int num1, int num2) {
	return num1 + num2;
}
void ShowAddResult(int num) {
	printf("������� ���: %d\n", num);
}
int ReadNum(void) {
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUse(void) {
	printf("�ΰ��� ������ �Է��ϸ� ���� ����� ���\n");
	printf("�ΰ��� ������ �Է�\n");
}
int main(void) {
	int result, num1, num2;
	HowToUse();
	num1 = ReadNum();
	num2 = ReadNum();
	result = add(num1, num2);
	ShowAddResult(result);
	return 0;
}