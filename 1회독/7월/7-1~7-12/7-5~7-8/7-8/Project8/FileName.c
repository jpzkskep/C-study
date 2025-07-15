#include <stdio.h>
int main() {
	char str_a[] = "abc";
	char str_b[] = "abc";
	if (str_a == str_b) {
		//실행안되는 이유는 a,b,c의 주소값이 다르기 때문
	}
	return 0;
}