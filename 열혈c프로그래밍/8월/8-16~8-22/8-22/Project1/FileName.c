#include <stdio.h>
int main(void) {
	char name[10];
	char sex;
	int age;
	/*
	FILE* fp = fopen("friend.txt", "wt");
	int i;
	for (i = 0; i < 3; i++) {
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
	*/
	FILE* fp = fopen("friend.txt", "rt");
	int ret;
	while (1) {
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF) {
			break;
		}
		printf("%s %c %d\n", name, sex, age);
	}
	fclose(fp);
	return 0;
}