//인라인 함수
#include <stdio.h>
__inline int square(int a) { return a * a; }
int main() {
	printf("%d", square(3));
	return 0;
}