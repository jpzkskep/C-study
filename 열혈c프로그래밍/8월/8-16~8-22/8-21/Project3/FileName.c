#include <stdio.h>
int main(void) {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];
	if (src == NULL || des == NULL) {
		puts("파일오픈 실패");
		return -1;
	}
	while (fgets(str, sizeof(str), src) != NULL) {
		fputs(str, des);
	}
	if (feof(src) != 0) {
		fputs("파일복사 완료", stdout);
	}
	else {
		fputs("파일복사 실패", stdout);
	}
	fclose(src);
	fclose(des);
	return 0;
}