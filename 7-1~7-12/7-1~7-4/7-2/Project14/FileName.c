//�迭�� ��(column) �������� �Ųٷ� ����϶�
#include <stdio.h>
int main() {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int (*p)[4] = arr;
	for (int j = 3; j >= 0; j--) {
		for (int i = 2; i >= 0; i--) {
			printf("%d ", *(*(p + i) + j));
		}
	}
	return 0;
}