//n*n형태의 달팽이 배열
#include <stdio.h>
int main(void) {
	int num[51][51] = { 0 };
	int x = 0, y = -1;
	int value = 1;
	int repeat;
	int n;
	int point = 1;
	printf("n의값을 입력하세요:");
	scanf("%d", &n);
	repeat = n;
	while (repeat > 0) {
		for (int i = 0; i < repeat; i++) {	//가로반복
			y += point;
			num[x][y] = value++;
		}
		repeat--;
		for (int i = 0; i < repeat; i++) {	//세로반복
			x += point;
			num[x][y] = value++;
		}
		point *= -1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}