#include <stdio.h>
int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int* first = &arr[0];
	int* end = &arr[5];
	int temp;
	for (int i = 0; i < 3; i++) {
		temp = *(first + i);
		*(first + i) = *(end - i);
		*(end - i) = temp;
	}
	for (int i = 0; i < 6; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}