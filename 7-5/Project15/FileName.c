//10개의 원소를 입력받고 그 원소를 큰순으로 출력
#include <stdio.h>
int which_max(int *number, int size);
int main() {
	int num[10];
	printf("10개의 수를 입력하시오 : ");
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