//fscanf �̿�
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char data[100];
	if (fp == NULL) {
		printf("���� ���� ����! \n");
		return 0;
	}
	printf("---------------�Է¹��� �ܾ��------------------\n");
	while (fscanf(fp, "%s", data) != EOF) {
		printf("%s \n", data);
	}
	fclose(fp);
}