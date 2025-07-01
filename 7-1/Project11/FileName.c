/*배열 포인터 */
#include <stdio.h>
int main() {
	int arr[2][3];
	int brr[10][3];
	int crr[2][5];
	int(*parr)[3];
	parr = arr;
	parr = brr;
	parr = crr;	//오류
	return 0;
}