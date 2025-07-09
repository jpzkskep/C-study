// 1부터 n까지의 홀수 개수와 합 구하기
#include <stdio.h>
int main() {
	int n,count=0,sum=0;
	printf("n을 입력하시오 : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			count++;
			sum = sum + i;
		}
	}
	printf("홀수의 개수 : %d \n",count);
	printf("홀수의 합 : %d \n", sum);
}