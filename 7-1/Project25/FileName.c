//project24 순서바꿈
#include <stdio.h>
int main() {
	int arr[2][3] = { {10,20,30},{40,50,60} };
	int (*p)[3] = arr;
	printf("첫번째 행의 세번째 값 %d \n", *(*(p + 0) + 2));
	printf("두번째 행의 첫번째 값 %d \n", *(*(p + 1) + 0));
	return 0;
}