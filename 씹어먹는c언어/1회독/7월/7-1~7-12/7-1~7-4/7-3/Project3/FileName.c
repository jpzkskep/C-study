/*
포인터 int (*p)[3]를 사용해 arr을 가리키고, 포인터 연산을 통해 arr[1][2]를 출력하라.

int **pp를 선언한 뒤, 아래 내용을 따르시오:

정수형 변수 3개 a=10, b=20, c=30을 선언

포인터 배열 int* ptrs[3]에 각각 &a, &b, &c를 저장

pp = ptrs 로 설정한 후, *(*(pp+2))의 값을 출력하라

조건 2에서 포인터의 흐름을 그림 또는 주석으로 설명하고, 
*(pp+1)과 *(*(pp+1))의 차이점을 실험으로 확인하라.
*/
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int (*p)[3] = arr;
	int a = 10, b = 20, c = 30;
	int** pp;
	int* ptrs[3];
	ptrs[0] = &a;
	ptrs[1] = &b;
	ptrs[2] = &c;
	pp = ptrs;
	printf("arr[1][2] = %d \n", *(*(p + 1) + 2));
	printf("*(*(pp+2)) = %d \n", *(*(pp + 2)));
	// ptrs[0]과 1,2에는 a,b,c의 주소값이 있음
	//pp=ptrs이기 때문에 **pp는 차례대로 10,20,30값이 있음
	printf("*(pp+1) = %p \n", *(pp + 1));
	printf("*(*(pp+1)) = %d \n", *(*(pp + 1)));
	// *(pp+1)은 ptrs[1]의 주소을 나타냄
	//*(*(pp+1))은 ptrs[1]의 값 즉,b을 나타냄
	return 0;
}