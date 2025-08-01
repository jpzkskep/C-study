#include <stdio.h>
int main(void) {
	int input, sum = 0;
	while (1) {
		scanf("%d", &input);
		sum += input;
		if (input == 0) break;
	}
	printf("%d", sum);
	return 0;
}