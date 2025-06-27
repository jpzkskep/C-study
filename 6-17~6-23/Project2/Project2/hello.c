//변수 알아보기
#include <stdio.h>
int main() {
	int a;
	a = 10;
	printf("a의 값은 :%d \n", a);

/*변수 알아보기2*/
//#include <stdio.h>
//int main() {
	int b;
	b = 127;
	printf("b의 값은 %d진수로 %o입니다\n", 8, b);
	printf("b의 값은 %d진수로 %d입니다\n", 10, b);
	printf("b의 값은 %d진수로 %x입니다\n", 16, b);

//변수 알아보기3//
//#include <stdio.h>
//int main() {
	float c = 3.141592f;
	double d = 3.141592;
	printf("c: % f\n",c);
	printf("d: % f\n",d);
	return 0;
}