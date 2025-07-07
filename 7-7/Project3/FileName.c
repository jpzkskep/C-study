//자기자신을 호출하는 함수를 이용해서 1부터 특정한 수까지의 곱 구하기
#include <stdio.h>
int main() {
	int n;
	printf("특정한  수 n을 입력하시오 : ");
	scanf("%d", &n);
	printf("%d", call(n));
	return 0;
}
int call(int number) {
	if (number <= 1) {
		return 1;
	}
	else {
		number = number * call(number - 1);
		return number;
	}
}