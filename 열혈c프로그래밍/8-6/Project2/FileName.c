/*도전8
2의 n승을 구하는 함수를 재귀적으로 표현
*/
#include <stdio.h>
int town(int top);
int main(void) {
	int n,result;
	printf("n입력:");
	scanf("%d", &n);
	result = town(n);
	printf("2의 %d승은 %d", n, result);
	return 0;
}
int town(int top) {
	if (top < 1) {
		return 1;
	}
	else {
		return 2 * town(top - 1);
	}
}