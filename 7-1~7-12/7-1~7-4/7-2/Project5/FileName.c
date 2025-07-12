/*
1. 정수형 배열 arr[5] = { 10, 20, 30, 40, 50 } 를 선언하시오.
2. 포인터 ptr이 배열의 첫 번째 원소를 가리키도록 하시오.
3. ptr을 이용해서 다음 조건에 맞게 배열 값을 출력하시오.

   - ptr은 증가/감소 연산을 이용해 배열 내 원소를 순서대로 출력하되,
   - *(ptr + i) 형식 또는 ptr[i] 형식 모두 직접 사용해볼 것.

마지막에 ptr을 다시 원래 위치로 되돌려놓고 끝내시오.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = &arr[0];
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int j = 0; j < 5; j++) {
		printf("%d ", *(ptr + j));
	}
	return 0;
}