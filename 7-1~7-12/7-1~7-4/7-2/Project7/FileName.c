/*
1. 정수형 배열 arr[5] = { 11, 22, 33, 44, 55 } 선언
2. 포인터 ptr이 arr을 가리키도록 하시오
3. 다음을 출력하시오:

   (1) ptr[1]
   (2) 2[ptr]
   (3) *(ptr + 3)
   (4) *(4 + ptr)
   (5) *(arr + 0)

4. 이 값들이 각각 어떤 원소를 의미하는지, 왜 같은지 주석으로 설명하시오.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 11,22,33,44,55 };
	int* ptr = arr;
	printf("ptr[1] = %d \n", ptr[1]);
	printf("2[ptr] = %d \n", 2[ptr]);
	printf("*(ptr+3) = %d \n", *(ptr + 3));
	printf("*(4+ptr) = %d \n", *(4 + ptr));
	printf("*(arr+0) = %d \n", *(arr + 0));
	//1번째 ptr=&arr[0]이므로 ptr[1]은 22
	//2번째 2[ptr]은 *(2+ptr)과 같음 즉 arr[2]=33
	//3번째 *(ptr+3)은 arr[3]=44
	//4번째 arr[4]=55
	//5번째 그냥 arr[0]=11
	//3,4,5번 *(ptr+n)형식에서 n 은 int형 4바이트 n=3이라 가정하면 4*3=12바이트 이동
	return 0;
}