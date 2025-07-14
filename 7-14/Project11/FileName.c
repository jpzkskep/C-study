//인라인 함수 예제1
#include <stdio.h>
__inline int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	printf("3과 2중 최대값은 : %d", max(2, 3));
	return 0;
}