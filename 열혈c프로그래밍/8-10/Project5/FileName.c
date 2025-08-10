#include <stdio.h>
int main(void) {
	int input[5][5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			input[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &input[i][j]);
			input[i][4] += input[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			input[4][i] += input[j][i];
		}
	}
	for (int i = 0; i < 4; i++) {
		input[4][4] += input[i][4];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("input[%d][%d]=%d\n", i, j, input[i][j]);
		}
	}
	return 0;
}