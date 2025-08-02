#include <stdio.h>
int main(void) {
	int n,result=1;
	scanf("%d",&n);
	for (int i = n; i >= 1; i--) {
		result *= i;
	}
	printf("%d!=%d", n, result);
	return 0;
}