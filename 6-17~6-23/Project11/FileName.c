/* prefix(전위형)
postfix(후위형)*/
#include <stdio.h>
int main() {
	int a = 1;
	printf("++a : %d \n", ++a);
	a = 1;
	printf("a++ : %d \n", a++);
	printf("a : %d \n", a);
	return 0;
}