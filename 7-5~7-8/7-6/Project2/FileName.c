// 유클리도 호제법을 이용해서 N개의 수 들의 
// 최대공약수를 구하는 함수를 만들어보세요.
//틀림
#include <stdio.h>
int Euclid(int first, int second); 
int main() {
	int N;
	int num, result;
	printf("N을 입력하시오: ");
	scanf("%d", &N);
	if (N <= 0) {
		printf("N은 1 이상이어야 합니다.\n");
		return 1;
	}
	printf("숫자 %d개를 입력하세요: ", N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (i == 0) {
			result = num; // 첫 숫자는 그냥 저장
		}
		else {
			result = Euclid(result, num); // 두 수의 최대공약수를 계속 누적해서 계산
		}
	}
	printf("최대공약수는 %d입니다.\n", result);
	return 0;
}
int Euclid(int first, int second) {
	int temp;
	for (;;) {
		if (first % second == 0) {
			return second;  
		}
		else {
			if (first % second > second) {
				first = first % second;
			}
			else {
				temp = first % second;
				first = second;
				second = temp;
			}
		}
	}
}