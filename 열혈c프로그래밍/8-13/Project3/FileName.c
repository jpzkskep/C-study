//오른쪽으로 90도 만큼 이동
#include <stdio.h>
int main(void) {
	int num[4][4];
	int temp[4][4];
	int t = 1;
	int count = 1;
	int n;
	printf("몇번 돌릴건가요?");
	scanf("%d", &n);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			num[i][j] = t;
			temp[i][j] = t;
			t++;
		}
	}
	while (count <= n) {
		printf("%d번째 돌렸을때\n", count);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (count % 4 == 1) {
					num[i][j] = temp[3-j][i];
				}
				else if (count % 4 == 2) {
					num[i][j] = temp[3-i][3-j];
				}
				else if (count % 4 == 3) {
					num[i][j] = temp[j][3-i];
				}
				else if (count % 4 == 0) {
					num[i][j] = temp[i][j];
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%d ", num[i][j]);
			}
			printf("\n");
		}
		count++;
	}
	return 0;
}