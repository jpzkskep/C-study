//상수 포인터?
#include <stdio.h>
int main() {
	int a;
	int b;
	const int* const pa = &a;
	*pa = 3;	//틀림
	pa = &b;	//틀림
	return 0;
}