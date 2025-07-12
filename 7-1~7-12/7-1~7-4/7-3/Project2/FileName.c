/*
정수형 배열 arr에 {10, 20, 30, 40, 50}을 저장하고, 포인터 p를 arr로 초기화하라.
이후 *(p + 2)의 값과 p[2], 2[p]의 값을 각각 출력하라.

p + 3과 arr + 3의 값을 printf로 출력해보고, 두 값이 같은지 확인하라.
이때 출력된 주소의 차이도 관찰하라.

arr이라는 이름과 &arr[0]이 같은지, *arr과 arr[0]이 같은지도 printf로 확인하라.

*(arr + 4)의 값을 구하라. 그리고 *(arr + 5)는 왜 위험한지 설명하라.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;
	printf("*(p+2) = %d \n", *(p + 2));
	printf("p[2] = %d \n", p[2]);
	printf("2[p] = %d \n", 2[p]);
	/* 모두다 같은값이 나옴 p[2]은 *(p+2)와 같음 2[p]은 *(2+p)와 같음
	그리고 덧셈법칙에 의하여 셋다 같음 */
	printf("p+3 = %p \n", p + 3);
	printf("arr+3 = %p \n", arr + 3);
	//두 주소의 값은 같음 둘다 arr[4]의 주소를 나타냄
	printf("arr = %p \n", arr);
	printf("& arr[0] = % p \n", &arr[0]);
	//둘다 같다 arr은 특수한 경우를 제외하면 암묵적으로 &arr[0]이라 본다
	printf("*arr = %d \n", *arr);
	printf("arr[0] = %d \n", arr[0]);
	// *(arr)은 *(arr+0)과 같음 즉 arr[0]과 같음
	printf("*(arr+4) = %d \n", *(arr + 4));
	// *(arr+4)의 값은 arr[4]의 값과 같음 즉 50
	// *(arr+5)의 값은 arr[5]인데 범위를 초과해 이상한 값이 출력되서 위험
	return 0;
}