//배열의 원소를 가르키는 포인터
#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d]의 주소값 %p", i, &arr[i]);
		printf("parr+%d의 값 %p", i, (parr + i));
		if (&arr[i] == (parr + i)) {
			printf(" -->일치 \n");
		}
		else {
			printf("-->불일치 \n");
		}
	}
	return 0;
}