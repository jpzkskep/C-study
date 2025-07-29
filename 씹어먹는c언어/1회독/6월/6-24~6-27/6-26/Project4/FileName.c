//1000000이하의 피보나치 수열 의 짝수항들의 합 구하기
#include <stdio.h> 
int main() {
	int first=1, second=1, next, sum = 0;
	while (second <= 1000000) {
		if (second % 2 == 0) {
			sum = sum + second;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("1000000이하의 피보나치 수열 짝수 항들의 합은: %d \n", sum);
	return 0;
}