//continue문 5의 배수를 제외한 숫자 출력
#include <stdio.h>
int main() {
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;
		printf("%d ", i);
	}
	return 0;
}