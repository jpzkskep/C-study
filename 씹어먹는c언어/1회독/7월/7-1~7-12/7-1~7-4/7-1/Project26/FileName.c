//배열 반복문 문제
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int (*p)[3] = arr;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}