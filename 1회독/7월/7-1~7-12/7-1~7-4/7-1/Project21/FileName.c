/*
2차원 배열 arr[2][3]에 { {1, 2, 3}, {4, 5, 6} }을 넣는다.
다음 다섯 값을 출력하는 프로그램을 작성하시오:
arr[0][1]
*(arr[0] + 1)
*(*(arr + 0) + 1)
arr[1][2]
*(*(arr + 1) + 2)
*/
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	printf("arr[0][1] : %d \n", arr[0][1]);
	printf("*(arr[0]+1) : %d \n", *(arr[0] + 1));
	printf("*(*(arr+0)+1) : %d \n", *(*(arr + 0) + 1));
	printf("arr[1][2] : %d \n", arr[1][2]);
	printf("*(*(arr+1)+2) : %d \n", *(*(arr + 1) + 2));
	return 0;
	//첫번째는 2출력
	//두번쨰는 2출력
	//세번째는 
	//네번째는 6출력
	//다섯번째는 
}