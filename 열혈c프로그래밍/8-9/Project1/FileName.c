#include <stdio.h>
void left1(int* input);
void left0(int* input);
int main(void) {
	int num[10];
	for (int i = 0; i < 10; i++) {
		printf("�Է�:");
		scanf("%d", &num[i]);
	}
	printf("Ȧ�����:");
	for (int i = 0; i < 10; i++) {
		left1(&num[i]);
		
	}
	printf("\n¦�����:");
	for (int i = 0; i < 10; i++) {
		left0(&num[i]);
	}
	return 0;
}
void left1(int* input) {
	if (*input % 2 == 1) {
		printf("%d ", *input);
	}
}
void left0(int* input) {
	if (*input % 2 == 0) {
		printf("%d ", *input);
	}
}