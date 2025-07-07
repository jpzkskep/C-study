//유클리드 호제법을 이용해서 n개의 수들의 최대 공약수를 구하는 함수 만들기
#include <stdio.h>
int main() {
	int m,n,number,next,result;
	printf("몇개의 수들의 최대공약수 : ");
	scanf("%d", &number);
	printf("수 2개를 입력하시오 : ");
	scanf("%d %d", &m, &n);
	result=eculid(m, n);
	printf("\n");
	for (int i = 0; i < number-2; i++) {
		printf("다음수를 입력하시오 :");
		scanf("%d", &next);
		result=eculid(result, next);
	}
	printf("%d", result);
	return 0;
}
int eculid(int first, int second) {
	int parr;
	for (;;) {
		if (first % second == 0) {
			return second;
			break;
		}
		else {
			if (second > first%second) {
				parr = first % second;
				first = second;
				second = parr;
			}
		}
	}
	return 0;
}