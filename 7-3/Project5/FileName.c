/*
[총정리 복습 - 문제 1번]
int (*p)[4] = arr; 선언 후, 이 포인터 p를 사용하여 
배열 전체 값을 세로 방향으로 출력하라.

int x = 100, y = 200, z = 300;
int* list[3];를 선언한 뒤, 각각 x, y, z를 가리키게 하라.

const int* cp = list[2];를 선언한 후, 해당 포인터를 활용하여 z의 값을 출력하라.
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
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			printf("%d ", *(*(p + i) + j));
		}
	}
	printf("\n");
	for (int k = 0; k < 3; k++) {
		printf("%d ", *(*(list + k)));
	}
	printf("\n");
	cp = &z;
	printf("%d", *cp);
	return 0;
}