#include <stdio.h>	//Ʋ��
int main(void) {
	int num[51][51] = { 0 };
	int x = 0, y = -1;	// x�� y��
	int n;
	int how_many;
	scanf("%d", &n);
	how_many = n;	//nĭ �̵�
	int direction = 1;	//�̵����� ������1 ����-1
	int value = 1;	//�迭�� ä�� ����
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