#include <stdio.h>
int main(void) {
	int input,count=9;
	scanf("%d", &input);
	while (count >= 1) {
		printf("%d X %d = %d\n", input, count, input * count);
		count--;
	}
	return 0;
}