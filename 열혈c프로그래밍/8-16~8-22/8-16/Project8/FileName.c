//������ ������ ���ڿ��� �Է¹޾Ƽ� �����ϴ� ������ ������ ���
#include <stdio.h>	//Ʋ��
#include <string.h>
int main(void) {
	char input[50];
	int len = 0;
	int sum = 0;
	scanf("%s", input);
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	for (int i = 0; i < len; i++) {
		if (strcmp(input[i], "0") == 0) {
			sum += 0;
		}
	}
	printf("%d", sum);
	return 0;
}