/*
정수형 배열 arr[5] = { 10, 20, 30, 40, 50 } 를 선언하고,
포인터 ptr을 사용하여 다음 조건을 만족하는 코드를 작성하시오.

1. ptr은 arr을 가리킨다.
2. ptr을 이용해서 arr[0], arr[1], arr[2]의 값을 차례대로 출력한다. (포인터 덧셈 사용)
3. ptr + 3이 가리키는 값을 출력하시오.
4. ptr을 2 증가시킨 후, 그 위치가 가리키는 값을 출력하시오.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;
	printf("arr[0] = %d \n", *ptr);
	printf("arr[1] = %d \n", *(ptr + 1));
	printf("arr[2] = %d \n", *(ptr + 2));
	printf("ptr + 3 = %d \n", *(ptr+3));
	ptr = ptr + 2;
	printf("ptr + 2 = %d \n", *ptr);
	return 0;
}
