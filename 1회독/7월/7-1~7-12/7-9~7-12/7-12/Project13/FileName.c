//¿À·ù
#include <stdio.h>
int* function() {
	int a = 2;
	return &a;
}
int main() {
	int* pa = function();
	printf("%d \n", *pa);
}