//상수를 인자로
#include <stdio.h>
int read_val(const int val);
int main() {
	int a;
	scanf("%d", &a);
	read_val(a);
	return 0;
}
int read_val(const int val) {
	val = 5;	//const 가 int왼쪽에 있어 값고정 이다.
	return 0;
}