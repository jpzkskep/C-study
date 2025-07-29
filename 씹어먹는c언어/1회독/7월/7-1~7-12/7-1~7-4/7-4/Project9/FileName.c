//1부터 n까지의 합
#include <stdio.h>
int sum_toN(int first,int second) {
	int sum = 0;
	for (first; first < second+1; first++) {
		sum += first;
	}
	return sum;
}
int main() {
	int number;
	printf("n을 입력하세요 : ");
	scanf("%d", &number);
	printf("1부터 %d까지의 합은 : %d", number, sum_toN(1, number));
	return 0;
}