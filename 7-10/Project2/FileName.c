//����ü ����
#include <stdio.h>
char copy_str(char* dest, char* src);
struct books {
	char name[30];
	char author[30];
	char publi[30];
	int borrowed;
};
int main() {
	struct books harry;
	copy_str(harry.name, "Harry potter");
	copy_str(harry.author, "J.K");
	copy_str(harry.publi, "scholastic");
	harry.borrowed = 0;
	printf("å�̸� : %s \n", harry.name);
	printf("���� �̸� : %s \n", harry.author);
	printf("���ǻ� �̸� : %s \n", harry.publi);
	return 0;
}
char copy_str(char* dest, char* src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return 1;
}