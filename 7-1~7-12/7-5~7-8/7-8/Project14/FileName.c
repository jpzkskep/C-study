// getchar�Լ� �̿�
#include <stdio.h>
int main() {
	int num;
	char c;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	getchar();
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);
	return 0;
}