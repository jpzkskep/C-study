//���� ��ġ ������
/*
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char c;
	if (fp == NULL) {
		printf("file open error ! \n");
		return 0;
	}
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
}
*/

//fseek �Լ� ����
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char data[10];
	char c;
	if (fp == NULL) {
		printf("file open error ! \n");
		return 0;
	}
	fgets(data, 5, fp);
	printf("�Է¹��� ������ : %s \n", data);
	c = fgetc(fp);
	printf("�� ������ �Է� ���� ���� : %c \n", c);
	fseek(fp, -1, SEEK_CUR);
	c = fgetc(fp);
	printf("�׷��ٸ� ���� ���ڰ�? : %c \n", c);
	fclose(fp);
}