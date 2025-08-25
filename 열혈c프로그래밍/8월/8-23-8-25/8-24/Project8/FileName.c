#include <stdio.h>
#define pi 3.14
#define area(r) ((r)*(r)*pi)
int main(void) {
	double rad;
	printf("반지름 입력:");
	scanf("%lf", &rad);
	printf("원의넓이:%g", area(rad));
	return 0;
}