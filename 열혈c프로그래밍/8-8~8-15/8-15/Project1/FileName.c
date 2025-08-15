#include <stdio.h>	//틀림
int main(void) {
	int num[51][51] = { 0 };
	int x = 0, y = -1;	// x행 y열
	int n;
	int how_many;
	scanf("%d", &n);
	how_many = n;	//n칸 이동
	int direction = 1;	//이동방향 오른쪽1 왼쪽-1
	int value = 1;	//배열에 채울 숫자
	while (how_many > 0) {
		for (int i = 0; i < how_many; i++) {
			y += direction;
			num[x][y] = value++;
		}
		how_many--;
		for (int i = 0; i < how_many; i++) {
			x += direction;
			num[x][y] = value++;
		}
		direction *= -1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}