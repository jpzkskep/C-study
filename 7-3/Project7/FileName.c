/*
int x = 5, y = 10, z = 15;
int* list[3];�� �����ϰ� x, y, z�� �ּҸ� ���� �����Ѵ�.

int** pp;�� �����ϰ�, ���� ������ pp�� list�� ����Ű���� �����Ѵ�.

for���� �̿��Ͽ� pp�� ���� x, y, z�� ���� ���

�迭 ���� ������δ� *(*(pp + i))�� ����� ��.
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
		printf("��: %d\n", *(*(pp + i)));
	}
	return 0;
}