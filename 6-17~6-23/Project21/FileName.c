#include <stdio.h>
int main() {
	float width;
	float length;
	float area;
	float round;
	printf("���� ���̸� �Է��ϼ���:");
	scanf("%f", &width);
	printf("���� ���̸� �Է��ϼ���:");
	scanf("%f", &length);
	area = width * length;
	round = 2 * width + 2 * length;
	printf("���簢���� ���̴� %.6f �Դϴ�. \n", area);
	printf("���簢���� �ѷ��� %.6f �Դϴ�. \n", round);
	return 0;
}