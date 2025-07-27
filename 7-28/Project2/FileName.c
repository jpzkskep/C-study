//getchar함수
#include <stdio.h>
int main() {
	int num;
	char c;
	printf("숫자입력:");
	scanf("%d",&num);
	getchar();
	printf("문자입력:");
	scanf("%c", &c);
	return 0;
}