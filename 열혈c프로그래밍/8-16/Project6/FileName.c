#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[20];
	char str2[20];
	printf("���ڿ�1 �Է�:");
	scanf("%s", str1);
	printf("���ڿ�2 �Է�:");
	scanf("%s", str2);
	if (!strcmp(str1, str2)) {
		fputs("�ι��ڿ��� ������ �����մϴ�.", stdout);
		printf("\n");
	}
	else {
		fputs("�� ���ڿ��� �������� �ʽ��ϴ�.", stdout);
		printf("\n");
		if (!strncmp(str1, str2, 3)) {
			fputs("�׷��� �� �����ڴ� �����մϴ�.", stdout);
			printf("\n");
		}
	}
	return 0;
}