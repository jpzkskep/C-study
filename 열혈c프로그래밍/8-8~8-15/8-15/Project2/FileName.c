//n*n������ ������ �迭
#include <stdio.h>
int main(void) {
	int num[51][51] = { 0 };
	int x = 0, y = -1;
	int value = 1;
	int repeat;
	int n;
	int point = 1;
	printf("n�ǰ��� �Է��ϼ���:");
	scanf("%d", &n);
	repeat = n;
	while (repeat > 0) {
		for (int i = 0; i < repeat; i++) {	//���ιݺ�
			y += point;
			num[x][y] = value++;
		}
		repeat--;
		for (int i = 0; i < repeat; i++) {	//���ιݺ�
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