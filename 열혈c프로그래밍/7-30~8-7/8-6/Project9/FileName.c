//아스키코드 값이 가장 큰 문자를 찾아서 출력 소문자만
#include <stdio.h>
int main(void) {
	char input[50];
	int result[50] = { 0 };
	int count = 0;
	char alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 97 + i;
	}
	printf("영단어를 입력하시오:");
	scanf("%s", input);
	while (input[count] != '\0') {
		result[count] = input[count] - 'a';
		count++;
	}
	int max = result[0];
	for (int i = 0; i < 50; i++) {
		if (result[i] > max) {
			max = result[i];
		}
	}
	printf("%c\n", alphabet[max]);	
	return 0;
}