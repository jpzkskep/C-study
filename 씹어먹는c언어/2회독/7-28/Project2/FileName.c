//getchar�Լ�
#include <stdio.h>
int main() {
	int num;
	char c;
	printf("�����Է�:");
	scanf("%d",&num);
	getchar();
	printf("�����Է�:");
	scanf("%c", &c);
	return 0;
}