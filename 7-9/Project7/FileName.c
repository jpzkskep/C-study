/*
문자열 2개를 입력받아 먼저 입력받은 문자열에서
나중에 입력받은 문자열의 위치를 검색하는 함수
없다면 -1을 리턴하고 있다면 그 위치를 리턴
*/
//틀림
#include <stdio.h>

int find(char* input1, char* input2);

int main() {
	char input1[100], input2[100];
	printf("1번째 문자열 : ");
	scanf("%s", input1);
	printf("2번째 문자열 : ");
	scanf("%s", input2);

	int result = find(input1, input2);

	if (result == -1)
		printf("포함되어 있지 않습니다. -1\n");
	else
		printf("위치 : %d\n", result);

	return 0;
}

int find(char* input1, char* input2) {
	int i = 0, j, start;

	while (input1[i] != '\0') {
		start = i;
		j = 0;

		// 두 문자열이 일치하는지 확인
		while (input1[start] == input2[j] && input2[j] != '\0') {
			start++;
			j++;
		}

		if (input2[j] == '\0') {
			// 끝까지 다 맞으면 시작 위치 리턴
			return i;
		}

		i++;
	}

	return -1; // 못 찾음
}
