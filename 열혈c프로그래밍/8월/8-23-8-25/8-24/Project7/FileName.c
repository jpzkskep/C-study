#include <stdio.h>
#define add(a,b,c) ((a)+(b)+(c))
#define mul(a,b,c) ((a)*(b)*(c))
int main(void) {
	printf("%d\n", add(3, 4, 5));
	printf("%d", mul(3, 4, 5));
	return 0;
}