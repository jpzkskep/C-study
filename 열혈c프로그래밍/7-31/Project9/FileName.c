#include <stdio.h>
int main(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기 : %d\n", sizeof(ch));
	printf("변수 inum의 크기 : %d\n", sizeof(inum));
	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));
	printf("char크기 : %d\n", sizeof(char));
	printf("int크기 : %d\n", sizeof(int));
	printf("long크기 : %d\n", sizeof(long));
	printf("long long크기 : %d\n", sizeof(long long));
	printf("float크기 : %d\n", sizeof(float));
	printf("double크기 : %d\n", sizeof(double));
	return 0;
}