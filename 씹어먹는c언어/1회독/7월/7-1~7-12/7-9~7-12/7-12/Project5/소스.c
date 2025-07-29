#include <stdio.h>
void add_one(int* p) {
	(*p) += 1;
}
int main() {
	int a = 1;
	printf("before : %d \n", a);
	add_one(&a);
	printf("after : %d \n", a);
}