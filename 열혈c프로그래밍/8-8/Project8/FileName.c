#include <stdio.h>
void doubled(int* input);
int main(void) {
	int num;
	printf("����1���� �Է��Ͻÿ�:");
	scanf("%d", &num);
	doubled(&num);
	printf("%d", num);
	return 0;
}
void doubled(int* input) {
	*input *= *input;
}