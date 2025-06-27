/*사용자로부터 **알파벳 소문자 1개(char)**를 입력받아, 
다음과 같이 해당 문자의 발음을 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
int main() {
	char k;
	printf("알파벳 입력 : ");
	scanf("%c", &k);
	switch (k) {
	case 'a':
		printf("에이 \n");
		break;
	case 'b':
		printf("비 \n");
		break;
	case 'c':
		printf("씨 \n");
		break;
	default:
		printf("죄송해요, 잘 몰라요!");
		break;
	}
	return 0;
}