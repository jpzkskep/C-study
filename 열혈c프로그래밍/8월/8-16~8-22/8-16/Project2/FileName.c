#include <stdio.h>
void clear(void) {
	while (getchar() != '\n');
}
int main(void) {
	char id[7];
	char name[10];
	fputs("주민번호 앞 6자리 입력:", stdout);
	fgets(id, sizeof(id), stdin);
	clear();
	fputs("이름입력:", stdout);
	fgets(name, sizeof(name), stdin);
	printf("주민번호:%s\n", id);
	printf("이름:%s\n", name);
	return 0;
}