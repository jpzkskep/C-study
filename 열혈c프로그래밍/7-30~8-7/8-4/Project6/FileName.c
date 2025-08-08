//도전2
#include <stdio.h>
void nine(int num1, int num2);
int main(void) {
	int num1, num2;
	printf("두 수 사이의 구구단을 출력: ");
	scanf("%d %d", &num1, &num2);
	nine(num1, num2);
}
void nine(int num1, int num2) {
	int big = num2, small = num1;
	if (num1 > big) big = num1,small = num2;
	for (int i = small; i <= big; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
}