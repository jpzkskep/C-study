#include <stdio.h>
int main(void) {
	int input,count=0;
	scanf("%d", &input);
	while (count < input) {
		printf("Hello world!\n");
		count++;
	}
	return 0;
}