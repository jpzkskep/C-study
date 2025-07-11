//전역변수의 문제점
#include <stdio.h>
int how_many = 0;
int how_many2 = 0;
int function() {
	how_many++;
	printf("function called : %d \n", how_many);
	return 0;
}
int function2() {
	how_many2++;
	printf("function2 called : %d \n", how_many2);
	return 0;
}
int main() {
	function();
	function2();
	function();
	function2();
	function2();
	function2();
	function();
	function();
	function2();
	return 0;
}