//적당한 길이의 문자열을 입력받아서 존재하는 숫자의 총합을 계산
#include <stdio.h>	//틀림
#include <string.h>
int main(void) {
	char input[50];
	int len = 0;
	int sum = 0;
	scanf("%s", input);
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	for (int i = 0; i < len; i++) {
		if (strcmp(input[i], "0") == 0) {
			sum += 0;
		}
	}
	printf("%d", sum);
	return 0;
}