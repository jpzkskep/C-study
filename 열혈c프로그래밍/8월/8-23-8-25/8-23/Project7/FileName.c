#include <stdio.h>
#define SQUARE(x) x*x
int main(void) {
	int num = 30;
	printf("%d\n", SQUARE(num));
	printf("%d\n", SQUARE(-5));
	printf("%d\n", SQUARE(3 + 2));
	return 0;
}