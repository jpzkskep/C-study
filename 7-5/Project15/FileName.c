//10���� ���Ҹ� �Է¹ް� �� ���Ҹ� ū������ ���
#include <stdio.h>
int which_max(int *number, int size);
int main() {
	int num[10];
	printf("10���� ���� �Է��Ͻÿ� : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	which_max(num, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	return 0;
}
int which_max(int *number, int size) {
	int ex;
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j<size; j++ ) {
			if (number[j] > number[i]) {
				ex = number[i];
				number[i] = number[j];
				number[j] = ex;
			}		
		}
	}
	return 0;
}