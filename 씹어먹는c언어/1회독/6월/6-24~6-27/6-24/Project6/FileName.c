//if-else문
#include <stdio.h>
int main() {
	int num;
	printf("아무 숫자나 입력해 보세요:");
	scanf("%d", &num);
	if (num == 7) {
		printf("행운의 숫자 7이군요 \n");
	} else {
		printf("그냥 보통 숫자인 %d를 입력했군요 \n", num);
	}
	return 0;
}