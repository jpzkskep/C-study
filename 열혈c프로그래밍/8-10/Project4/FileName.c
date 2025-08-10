#include <stdio.h>
int main(void) {
	int num1[2][4];
	int num2[4][2];
	int count = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			num1[i][j] = count;
			count++;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			num2[i][j] = num1[j][i];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("num2[%d][%d]=%d\n", i, j, num2[i][j]);
		}
	}
	return 0;
}