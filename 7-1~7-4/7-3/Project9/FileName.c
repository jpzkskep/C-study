/*
2차원 배열 int table[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } }; 를 선언한다.

int (*p)[3] = table; 을 선언하고, 이 배열 포인터를 통해 배열의 모든 값을 출력하라.

int* list[2]; 를 선언하고, list[0]은 table[0]을, list[1]은 table[1]을 가리키게 하라.
(즉, 포인터 배열이 각 행을 가리키도록 설정)

int** pp = list; 를 선언한 뒤, 이중 포인터 pp를 사용하여
table[0][1], table[1][2]의 값을 차례대로 출력하라.
*/
#include <stdio.h>
int main() {
	int table[2][3] = { {10,20,30},{40,50,60} };
	int (*p)[3] = table;
	int* list[2];
	list[0] = table[0];  
	list[1] = table[1];  
	int** pp = list;
	printf("선택값: %d\n", *(*(pp + 0) + 1));  
	printf("선택값: %d\n", *(*(pp + 1) + 2)); 
	return 0;
}