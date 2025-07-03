/*
[������ ���� - ���� 1��]
int (*p)[4] = arr; ���� ��, �� ������ p�� ����Ͽ� 
�迭 ��ü ���� ���� �������� ����϶�.

int x = 100, y = 200, z = 300;
int* list[3];�� ������ ��, ���� x, y, z�� ����Ű�� �϶�.

const int* cp = list[2];�� ������ ��, �ش� �����͸� Ȱ���Ͽ� z�� ���� ����϶�.
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