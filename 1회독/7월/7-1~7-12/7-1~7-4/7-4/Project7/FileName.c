//마술상자
#include <stdio.h>
int magicbox(user_input) {
	user_input += 4;
	return user_input;
}
int main() {
	int user_input;
	printf("정수 값을 입력하시오 : ");
	scanf("%d", &user_input);
	printf("정수값 %d 에 4를 더한 결과는 %d 입니다.",user_input, magicbox(user_input));
	return 0;
}