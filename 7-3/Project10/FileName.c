/*
int data[3][2] = { { 7, 14 }, { 21, 28 }, { 35, 42 } }; 라는 2차원 배열을 선언한다.

배열 포인터 int (*p)[2] = data; 를 선언하여 전체 배열을 가리킨다.

포인터 배열 int* list[3]; 를 선언하고,
각각 list[0], list[1], list[2]에 data[0], data[1], data[2]를 저장한다.

int** pp = list; 를 선언한 후, 아래 두 값을 출력하라:

data[1][0]에 해당하는 값

data[2][1]에 해당하는 값

출력 형식은 아래와 같이 하며, 반드시 *(*(pp + i) + j) 형식으로 출력할 것
*/
#include <stdio.h>
int main() {
	int data[3][2] = { {7,14},{21,28},{35,42} };
	int (*p)[2] = data;
	int* list[3];
	list[0] = data[0];
	list[1] = data[1];
	list[2] = data[2];
	int** pp = list;
	printf("선택값 : %d \n", *(*(pp + 1)));
	printf("선택값 : %d \n", *(*(pp + 2) + 1));
	return 0;
}