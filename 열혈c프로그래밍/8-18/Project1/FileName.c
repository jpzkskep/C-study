#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int name(int* input1, int* input2);	//�̸��� ������ Ȯ��
int where_is_space(int* input);	//������ ��ġ Ȯ��
int age(int* input1, int* input2);	//���̰� ������ Ȯ��
int main(void) {
	char input1[50];
	char input2[50];
	fputs("���1�� �̸��� ���ڸ� �Է��ϼ���:", stdout);
	fgets(input1, sizeof(input1), stdin);
	input1[strlen(input1 - 1)] = 0;
	fputs("���2�� �̸��� ���ڸ� �Է��ϼ���:", stdout);
	fgets(input2, sizeof(input2), stdin);
	input2[strlen(input2 - 1)] = 0;
	if (name(&input1[0], &input2[0])) {
		fputs("�̸��� �����մϴ�.", stdout); printf("\n");
	}
	else {
		fputs("�̸��� �������� �ʽ��ϴ�.", stdout); printf("\n");
	}
	if (age(&input1[0], &input2[0])) {
		fputs("���̰� �����ϴ�.", stdout); printf("\n");
	}
	else {
		fputs("���̰� �ٸ��ϴ�.", stdout); printf("\n");
	}
	return 0;
}

int name(int *input1, int *input2) {
	int len1 = strlen(input1);
	int len2 = strlen(input2);
	if (len1 != len2) {
		return 0;
	}
	else {
		return !(strncmp(input1, input2, len1));
	}
}

int where_is_space(int* input) {
	int len = strlen(input);
	for (int i = 0; i < len; i++) {
		if (input[i] == ' ') {
			return i;
		}
	}
}

int age(int* input1, int* input2) {
	int space1 = where_is_space(input1);
	int space2 = where_is_space(input2);
	int age1 = atoi(&input1[space1 + 1]);
	int age2 = atoi(&input2[space2 + 1]);
	if (age1 == age2) {
		return 1;
	}
	else {
		return 0;
	}
}
