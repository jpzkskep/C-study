//변수이름 출력
#include <stdio.h>
#define variable(var) printf(#var "\n");
int main() {
	int a;
	variable(a);
	return 0;
}