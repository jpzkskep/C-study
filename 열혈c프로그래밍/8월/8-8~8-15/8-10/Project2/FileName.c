#include <stdio.h>
void DesSort(int* num, int len);
int main(void) {
	int num[7];
	for (int i = 0; i < 7; i++) {
		printf("ют╥б:");
		scanf("%d", &num[i]);
	}
	DesSort(num, 7);
	for (int i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}
void DesSort(int* num, int len) {
	int temp;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (*(num + i) > *(num + j)) {
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
		}
	}
}