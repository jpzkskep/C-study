#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[20];
	char str2[20];
	printf("문자열1 입력:");
	scanf("%s", str1);
	printf("문자열2 입력:");
	scanf("%s", str2);
	if (!strcmp(str1, str2)) {
		fputs("두문자열은 완전히 동일합니다.", stdout);
		printf("\n");
	}
	else {
		fputs("두 문자열은 동일하지 않습니다.", stdout);
		printf("\n");
		if (!strncmp(str1, str2, 3)) {
			fputs("그러나 앞 세글자는 동일합니다.", stdout);
			printf("\n");
		}
	}
	return 0;
}