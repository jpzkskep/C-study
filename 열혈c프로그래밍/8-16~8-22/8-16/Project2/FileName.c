#include <stdio.h>
void clear(void) {
	while (getchar() != '\n');
}
int main(void) {
	char id[7];
	char name[10];
	fputs("�ֹι�ȣ �� 6�ڸ� �Է�:", stdout);
	fgets(id, sizeof(id), stdin);
	clear();
	fputs("�̸��Է�:", stdout);
	fgets(name, sizeof(name), stdin);
	printf("�ֹι�ȣ:%s\n", id);
	printf("�̸�:%s\n", name);
	return 0;
}