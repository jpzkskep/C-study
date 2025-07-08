//버퍼 비우기 gcc계열에서는 정상적으로 작동안됨
#include <stdio.h>
int main() {
	int num;
	char c;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	fflush(stdin);
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	return 0;
}