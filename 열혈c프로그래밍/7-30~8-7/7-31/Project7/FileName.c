#include <stdio.h>
int main(void) {
	int input;
	printf("������ �Է�:");
	scanf("%d", &input);
	int result = ~input+1;
	printf("%d", result);
	return 0;
}