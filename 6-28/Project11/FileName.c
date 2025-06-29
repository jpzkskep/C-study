//소수 프로그램
#include <stdio.h>
int main() {
	int guess = 5;	//판별하고 있는 소수의 수
	int prime[1000];	//현재까지 찾은 소수의개수-1 아래 두개의 소수를 미리 찾았으니 초기값은 1
	int index = 1;	//for문 변수
	int i;	//소수인지 판별을 위해 쓰이는 변수
	int ok;	//처음 두 소수는 특별한 경우
	prime[0] = 2;
	prime[1] = 3;
	for (;;) {
		ok = 0;
		for (i = 0; i <= index; i++) {
			if (guess % prime[i] != 0) {
				ok++;
			}
			else {
				break;
			}
		}
		if (ok == (index + 1)) {
			index++;
			prime[index] = guess;
			printf("소수: %d \n", prime[index]);
			if (index == 999) {
				break;
			}
		}
		guess = guess + 2;
	}
	return 0;
}