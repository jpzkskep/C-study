#include <stdio.h>
#define pi 3.14
#define area(r) ((r)*(r)*pi)
int main(void) {
	double rad;
	printf("������ �Է�:");
	scanf("%lf", &rad);
	printf("���ǳ���:%g", area(rad));
	return 0;
}