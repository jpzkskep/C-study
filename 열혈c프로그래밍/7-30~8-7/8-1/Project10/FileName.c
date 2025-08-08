#include <stdio.h>
int main(void) {
	int count = 0, input, sum = 0;
	while (count < 5) {
		scanf("%d", &input);
		if (input >= 1) {
			sum += input;
			count++;
		}
	}
	printf("%d", sum);
	return 0;
}