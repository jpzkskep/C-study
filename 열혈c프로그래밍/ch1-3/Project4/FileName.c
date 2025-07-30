#include <stdio.h>
/*
int main(void) {
	int num1 = 12;
	int num2 = 12;
	printf("num1=%d\n", num1);
	printf("num1++=%d\n", num1++);
	printf("num1=%d\n", num1);
	printf("num2=%d\n", num2);
	printf("++num2=%d\n", ++num2);
	printf("num2=%d", num2);
	return 0;
}
*/
int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;
	printf("num1=%d\n", num1);
	printf("num2=%d\n", num2);
	return 0;
}