/*
1. 정수형 배열 arr[5] = { 1, 2, 3, 4, 5 } 를 선언하라.
2. 포인터 ptr을 arr로 초기화하라.

다음 조건을 만족하는 코드를 작성하시오.

3. 포인터 ptr을 이용해 반복문 없이 arr[0]부터 arr[4]까지의 값을 각각 출력하라.
   (단, 배열 인덱스 [] 사용 금지, 반드시 ptr과 *ptr만 사용할 것)

4. arr[i]와 *(arr + i)의 결과가 같은지 3개 예시를 통해 출력으로 증명하라.
5. ptr[i]와 *(ptr + i)의 결과도 같은지 출력으로 증명하라.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	printf("arr[0] = %d \n", *ptr);
	printf("arr[1] = %d \n", *(ptr + 1));
	printf("arr[2] = %d \n", *(ptr + 2));
	printf("arr[3] = %d \n", *(ptr + 3));
	printf("arr[4] = %d \n", *(ptr + 4));
	printf("arr[2] = %d, *(arr + 2) = %d \n", arr[2], *(arr + 2));
	printf("ptr[3] = %d, *(ptr + 3) = %d \n", ptr[3], *(ptr + 3));
	printf("ptr[4] = %d, *(ptr + 4) = %d \n", ptr[4], *(ptr + 4));
}