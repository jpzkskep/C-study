//세 수 중 가장 큰 수 찾기
#include <stdio.h>
int main() {
	int a, b, c;
	printf("세 수를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c) {
		printf("가장 큰 수는 %d입니다.", a);
	}
	else if (b >= c && b >= a) {
		printf("가장 큰 수는 %d입니다.", b);
	}
	else if (c >= a && c >= b) {
		printf("가장 큰 수는 %d입니다.", c);
	}
	return 0;
}