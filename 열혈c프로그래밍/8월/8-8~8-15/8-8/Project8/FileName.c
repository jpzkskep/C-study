#include <stdio.h>
void doubled(int* input);
int main(void) {
	int num;
	printf("숫자1개를 입력하시오:");
	scanf("%d", &num);
	doubled(&num);
	printf("%d", num);
	return 0;
}
void doubled(int* input) {
	*input *= *input;
}