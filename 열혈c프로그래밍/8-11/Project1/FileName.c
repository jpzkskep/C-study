#include <stdio.h>
/*
void Swap(int* p1, int* p2);
int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1,*ptr2: %d %d\n", *ptr1, *ptr2);
	Swap(ptr1, ptr2);
	printf("*ptr1,*ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}
void Swap(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}
*/
void Swap(int** dp1, int** dp2);
int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1,*ptr2: %d %d\n", *ptr1, *ptr2);
	Swap(&ptr1, &ptr2);
	printf("*ptr1,*ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}
void Swap(int** dp1, int** dp2) {
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}