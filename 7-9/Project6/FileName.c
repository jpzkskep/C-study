/*
두개의 문자열을 입력받아서 같은면 같다 다르면 다르다
라고 출력하는 함수
*/
//틀림
#include <stdio.h>

int same(char* input1, char* input2);

int main() {
	char input1[100];
	char input2[100];
	printf("문자열 2개를 입력하시오 : ");
	scanf("%s", input1);
	scanf("%s", input2);
	same(input1, input2); // 함수 호출
	return 0;
}

int same(char* input1, char* input2) {
	int i = 0;
	while (input1[i] != '\0' && input2[i] != '\0') {
		if (input1[i] != input2[i]) {
			printf("다르다\n");
			return 0;
		}
		i++;
	}

	// 둘 중 하나가 더 길면 다른 문자열
	if (input1[i] != '\0' || input2[i] != '\0') {
		printf("다르다\n");
		return 0;
	}

	printf("같다\n");
	return 1;
}