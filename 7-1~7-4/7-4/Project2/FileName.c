//함수의 리턴
#include <stdio.h>
int return_func() {
	printf("이건 실행됨");
	return 0;
	printf("이건 실행안됨");
}
int main() {
	return_func();
	return 0;
}