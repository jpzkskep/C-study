#include <stdio.h>
void maxmin(int *arr,int **maxptr,int **minptr);
int main(void) {
	int* maxptr;
	int *minptr;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수 입력:",i+1);
		scanf("%d", &arr[i]);
	}
	maxmin(arr,&maxptr,&minptr);
	printf("최대:%d 최소:%d", *maxptr, *minptr);
	return 0;
}
void maxmin(int *arr,int **maxptr,int **minptr) {
	int *min, *max;
	min = arr;
	max = arr;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > *max) {
			max = &arr[i];
		}
		if (arr[i] < *min) {
			min = &arr[i];
		}
	}
	*maxptr = max;
	*minptr = min;
}