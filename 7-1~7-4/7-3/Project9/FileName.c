/*
2���� �迭 int table[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } }; �� �����Ѵ�.

int (*p)[3] = table; �� �����ϰ�, �� �迭 �����͸� ���� �迭�� ��� ���� ����϶�.

int* list[2]; �� �����ϰ�, list[0]�� table[0]��, list[1]�� table[1]�� ����Ű�� �϶�.
(��, ������ �迭�� �� ���� ����Ű���� ����)

int** pp = list; �� ������ ��, ���� ������ pp�� ����Ͽ�
table[0][1], table[1][2]�� ���� ���ʴ�� ����϶�.
*/
#include <stdio.h>
int main() {
	int table[2][3] = { {10,20,30},{40,50,60} };
	int (*p)[3] = table;
	int* list[2];
	list[0] = table[0];  
	list[1] = table[1];  
	int** pp = list;
	printf("���ð�: %d\n", *(*(pp + 0) + 1));  
	printf("���ð�: %d\n", *(*(pp + 1) + 2)); 
	return 0;
}