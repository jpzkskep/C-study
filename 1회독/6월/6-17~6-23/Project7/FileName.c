#include <stdio.h>
int main() {
	int a, b;
	a = 10;
	b = 3;
	printf("a/b는:%f \n", a / b);	//하면 안됨(정수형 변수와 정수형 변수를 연산하면 언제나 정수로 유지됨)
	return 0;
}