//�� �� �� ���� ū �� ã��
#include <stdio.h>
int main() {
	int a, b, c;
	printf("�� ���� �Է��ϼ���:");
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c) {
		printf("���� ū ���� %d�Դϴ�.", a);
	}
	else if (b >= c && b >= a) {
		printf("���� ū ���� %d�Դϴ�.", b);
	}
	else if (c >= a && c >= b) {
		printf("���� ū ���� %d�Դϴ�.", c);
	}
	return 0;
}