//도전8
//2의 n승을 구하는 재귀적 프로그램
#include <stdio.h>
int find(int top);
int main(void) {
	int n,answer;
	printf("정수입력:");
	scanf("%d", &n);
	answer=find(n);
	printf("2의 %d승은 %d", n, answer);
	return 0;
}
int find(int top) {
	int result = 1;
	while (top != 0) {
		result = result * 2;
		top--;
		find(result);
		return result;
	}
}