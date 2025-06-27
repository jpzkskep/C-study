//1000000이하의 피보나치 수열의 짝수 항의 합들 구하기  //2번째,틀림
#include <stdio.h>
int main() {
	int first=1, second=1, next, sum = 0;
	for (first = 1; second <= 1000000; first++) {
		next = first + second;
		first = second;
		second = next;
		sum = sum + second;
	}
	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합 : %d \n", sum);
	return 0;
}