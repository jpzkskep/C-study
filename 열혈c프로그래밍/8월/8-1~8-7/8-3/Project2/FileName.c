#include <stdio.h>
int max(int first ,int second ,int thrid);
int min(int first, int second, int third);
int main(void) {
	int num1, num2, num3;
	printf("�� ���� �Է��Ͻÿ�:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū ��:%d\n", max(num1, num2, num3));
	printf("���� ���� ��:%d\n", min(num1, num2, num3));
	return 0;
}
int max(int first, int second, int third) {
	int max = first;
	if (second > max) max = second;
	if (third > max) max = third;
	return max;
}
int min(int first, int second, int third) {
	int min = first;
	if (second < min) min = second;
	if (third < min) min = third;
	return min;
}