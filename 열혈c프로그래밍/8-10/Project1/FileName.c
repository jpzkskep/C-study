#include <stdio.h>
int same(char* string,int len);
int main(void) {
	char input[50];
	int len = 0;
	printf("���ڿ� �Է�:");
	scanf("%s", input);
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	if (same(&input,len)) {
		printf("ȸ�� �Դϴ�.");
	}
	else {
		printf("ȸ���� �ƴմϴ�.");
	}
	return 0;
}
int same(char* string,int len) {
	int returning = 0;
	for (int i = 0; i < len/2; i++) {
		if (*(string + i) == *(string + (len - 1 - i))) {
			returning = 1;
		}
		else {
			return 0;
		}
	}
	if (returning == 1) {
		return 1;
	}
}