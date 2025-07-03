/*
* 다음 2차원 배열을 선언하고, 
**포인터 p를 이용해 열 우선 순회(세로 방향)**로 모든 원소를 출력하라
* 단, int (*p)[4] = arr;로 선언할 것.

정수형 변수 x=100, y=200, z=300을 선언하고,
포인터 배열 int* list[3]에 이들의 주소를 각각 저장한 뒤,
이 포인터 배열을 int** pp에 복사하고, pp를 이용해 세 변수 값을 모두 출력하라.

포인터 pp를 이용하여 y를 500으로 수정하라.
(단, *(*(pp+1)) = 500; 형태로 수행할 것)

상수 포인터 const int* cp = list[2]; 를 선언한 뒤, *cp = 1000;을 시도하고
에러 발생 이유를 확인하라. 또한 cp++는 가능한지 여부도 테스트하라.
*/
#include <stdio.h>
int main() {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int (*p)[4] = arr;
	int x = 100, y = 200, z = 300;
	int* list[3];
	list[0] = &x;
	list[1] = &y;
	list[2] = &z;
	const int* cp = list[2];
	int** pp = &list;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			printf("%d ", *(*(p + i) + j));
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d ", *(*(list + i)));
	}
	printf("\n");
	*(*(pp + 1)) = 500;
	printf("y = %d \n", *(*(pp + 1)));
	// *cp = 1000;	안되는 이유는 const가 int왼쪽에 있어 값 변경 불가 이기 때문
	// 주소변경은 가능함
	cp++;
	printf("%p", cp);
}