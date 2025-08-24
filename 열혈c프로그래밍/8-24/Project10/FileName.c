#include <stdio.h>
int num = 0;
void Increment(void) {
	num++;
}
int Getnum(void) {
	return num;
}
int main(void) {
	printf("num:%d\n", Getnum());
	Increment();
	printf("num:%d\n", Getnum());
	Increment();
	printf("num:%d\n", Getnum());
	return 0;
}