/*
int x = 5, y = 10, z = 15;
int* list[3];를 선언하고 x, y, z의 주소를 각각 저장한다.

int** pp;를 선언하고, 이중 포인터 pp를 list를 가리키도록 설정한다.

for문을 이용하여 pp를 통해 x, y, z의 값을 출력

배열 접근 방식으로는 *(*(pp + i))을 사용할 것.
*/
#include <stdio.h>
int main() {
	int x = 5, y = 10, z = 15;
	int* list[3];
	int** pp;
	list[0] = &x;
	list[1] = &y;
	list[2] = &z;
	pp = list;
	for (int i = 0; i < 3; i++) {
		printf("값: %d\n", *(*(pp + i)));
	}
	return 0;
}