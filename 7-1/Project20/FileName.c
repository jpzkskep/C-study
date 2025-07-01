/*
* 정수형 배열 arr[3] = {1, 2, 3}을 선언한다.
다음 세 가지를 각각 printf로 출력하시오:
arr
&arr
&arr[0]
그 다음, 각각에 1을 더한 주소도 출력하시오:
arr + 1
&arr + 1
&arr[0] + 1
*/
#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	printf("arr : %p \n", arr);
	printf("&arr : %p \n", &arr);
	printf("&arr[0] : %p \n", &arr[0]);
	printf("\n");
	printf("arr+1 : %p \n", arr + 1);
	printf("&arr+1 : %p \n", &arr + 1);
	printf("&arr[0]+1 : %p \n", &arr[0] + 1);
	return 0;
	// arr과 arr+1은 int형이기 떄문에 4바이트 차이남
	//&arr과 &arr+1은 4*3=12 바이트 차이남
	//&arr[0]과 &arr[0]+1은 4바이트 차이남
}