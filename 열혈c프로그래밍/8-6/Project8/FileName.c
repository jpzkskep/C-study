#include <stdio.h>
int main(void) {
	char input[100];
	int idx = 0, maxcount=0;
	char temp;
	printf("영어단어를 입력하시오:");
	scanf("%s", input);
	for (int i = 0; i < 100; i++) {
		if (input[i] != '\0') maxcount++;
		if (input[i] == '\0') break;
	}
	for (int i = 0; i < maxcount / 2; i++) {
		temp = input[i];
		input[i] = input[maxcount-1 - i];
		input[maxcount-1 - i] = temp;
	}
	while (input[idx] != '\0') {
		printf("%c", input[idx]);
		idx++;
	}
	return 0;
}