//2차원 배열의 동적 할당
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int i;
	int x, y;
	int** arr;	//arr[x][y]
	printf("arr[x][y]를 만들것입니다,\n");
	scanf("%d %d", &x, &y);
	arr = (int**)malloc(sizeof(int*) * x);
	//int*형 원소를 x개 가지는 1차원 배열 생성
	for (i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int)* y);
	}
	printf("생성 완료 \n");
	for (i = 0; i < x; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}