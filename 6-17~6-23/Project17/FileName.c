/*�����µ��� ȭ���� �ٲٱ�*/
#include <stdio.h>
int main() {
	double celsius;	//���� �µ�
	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf("%lf", &celsius);	//���� �µ��� �Է¹޴´�.
	printf("���� %f���� ȭ���� %f�� �Դϴ� \n", celsius, 9 * celsius / 5 + 32);
	return 0;
}