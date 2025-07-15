/*
정수형 변수 a, b, c를 각각 11, 22, 33으로 초기화한다.

int* arr[3];를 선언하고, a, b, c의 주소를 각각 arr에 저장한다.

int** p = arr; 라고 선언한 후, 이중 포인터 p를 이용해 a, b, c의 값을 모두 출력하라.
*/
#include <stdio.h>
int main() {
	int a = 11, b = 22, c = 33;
	int* arr[3];
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	int** p = arr;
	for (int i = 0; i < 3; i++) {
		printf("arr[%d]의 값 : %d \n", i, *(*(p + i)));
	}
	return 0;
}