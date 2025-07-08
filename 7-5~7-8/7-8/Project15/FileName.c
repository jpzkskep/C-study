//여러가지 문자
#include <stdio.h>
int main() {
	int num, i;
	char c;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	getchar();
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	printf("입력한 문자 : %c", c);
	return 0;
}