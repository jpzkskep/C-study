/*
[총정리 복습 - 문제 2번]
위의 포인터 배열 list에 각 변수의 주소를 순서대로 저장한다.

for문을 사용하여 list를 통해 가리키는 값을 출력하되,
홀수 번째 요소만 출력하라. (단, 인덱스 기준 0부터 시작)

각 출력은 "출력값: %d\n" 형식으로 출력한다.
*/
#include <stdio.h>
int main() {
	int a = 13, b = 26, c = 39, d = 52, e = 65;
	int* list[5];
	list[0] = &a, list[1] = &b, list[2] = &c, list[3] = &d, list[4] = &e;
	for (int i = 1; i < 6; i++) {
		if (i % 2 == 1) {
			printf("출력값 : %d \n", *(*(list+i-1)));
		}
	}
	return 0;
}