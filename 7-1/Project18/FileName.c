/*
다음 조건을 만족하는 코드를 작성하시오.

1. 정수형 배열 arr[5] = { 10, 20, 30, 40, 50 } 선언
2. 포인터 ptr을 arr로 초기화
3. 아래의 내용을 각각 출력하라:

   (1) arr[3], *(arr + 3), ptr[3], *(ptr + 3)의 값을 각각 출력
   (2) 3[arr], 3[ptr]의 값을 출력

4. 위 결과를 통해 [] 연산자의 의미가 *(a + b)와 같음을 확인하라.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;
	printf("arr[3] = %d \n", arr[3]);	//arr[3]은 *(arr+3)와 같음
	printf("*(arr+3) = %d \n", *(arr + 3));
	printf("ptr[3] = %d \n", ptr[3]);
	printf("*(ptr+3) = %d \n", *(ptr + 3));
	printf("\n");
	printf("3[arr] = %d \n", 3[arr]);	//3[arr]은 *(3+arr)와 같음
	printf("3[ptr] = %d \n", 3[ptr]);	//3[ptr]은 *(3+ptr)와 같음
	return 0;
	//첫번째 printf부분에서 *(arr+3)은 12바이트 이동함 int형은 4바이트 3*4=12
}