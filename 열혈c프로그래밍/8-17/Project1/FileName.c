#include <stdio.h>
#include <string.h>
int main(void) {
	char input[50];
	int sum = 0;
	printf("���ڿ��� �Է��Ͻÿ�:");
	fgets(input, sizeof(input), stdin);
	int len = strlen(input);
	for (int i = 0; i < len; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			sum = sum + (input[i] - '0');
		}
	}
	printf("%d", sum);
	return 0;
}