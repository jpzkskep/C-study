#include <stdio.h>
int add(int num1, int num2) {
	return num1 + num2;
}
void ShowAddResult(int num) {
	printf("덧셈결과 출력: %d\n", num);
}
int ReadNum(void) {
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUse(void) {
	printf("두개의 정수를 입력하면 덧셈 결과가 출력\n");
	printf("두개의 정수를 입력\n");
}
int main(void) {
	int result, num1, num2;
	HowToUse();
	num1 = ReadNum();
	num2 = ReadNum();
	result = add(num1, num2);
	ShowAddResult(result);
	return 0;
}