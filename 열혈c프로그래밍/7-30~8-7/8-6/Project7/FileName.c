#include <stdio.h>
int main(void) {
	int count = 0;
	int idx = 0;
	char input[100];
	printf("���ڿ��� �Է��Ͻÿ�:");
	scanf("%s", input);
	while (input[idx] != '\0') {
		count++;
		idx++;
	}
	printf("���ڿ��� ����:%d", count);
	return 0;
}