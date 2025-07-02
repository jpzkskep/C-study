/*
정수형 1차원 배열 arr이 다음과 같이 선언되어 있다:
arr은 크기 5인 정수 배열이고, 각각의 값은 10, 20, 30, 40, 50이다.
다음 조건을 모두 만족하는 프로그램을 작성하라:
arr, &arr, &arr[0] 이 세 표현이 각각 어떤 주소를 나타내는지 비교하여 출력한다.
sizeof(arr)와 sizeof(&arr)의 차이를 설명할 수 있도록 두 값을 출력한다.
배열 이름 arr이 실제로 어떤 타입으로 처리되는지 실험해본다.

조건:
포인터를 사용해서 주소 출력,
%p로 주소 확인,
sizeof로 바이트 크기 비교
결과를 통해 arr과 &arr의 차이를 코드로 직접 실험할 수 있게 만들 것
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	printf("arr : %p \n", arr);
	printf("&arr : %p \n", &arr);
	printf("&arr[0] : %p \n", &arr[0]);
	// arr과 &arr[0]은 암묵적으로 같음 동일한 주소 나타냄
	//&arr은 전체 arr의 주소를 나타냄
	printf("sizeof(arr) : %zd \n", sizeof(arr));
	printf("sizeof(&arr) : %zd \n", sizeof(&arr));
	// sizeof(arr)은 전체 arr 즉,4*5=20
	// sizeof(&arr)은 배열의 전체주소 64비트 기준 8
}