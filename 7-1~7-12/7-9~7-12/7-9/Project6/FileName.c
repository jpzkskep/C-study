/*
�ΰ��� ���ڿ��� �Է¹޾Ƽ� ������ ���� �ٸ��� �ٸ���
��� ����ϴ� �Լ�
*/
//Ʋ��
#include <stdio.h>

int same(char* input1, char* input2);

int main() {
	char input1[100];
	char input2[100];
	printf("���ڿ� 2���� �Է��Ͻÿ� : ");
	scanf("%s", input1);
	scanf("%s", input2);
	same(input1, input2); // �Լ� ȣ��
	return 0;
}

int same(char* input1, char* input2) {
	int i = 0;
	while (input1[i] != '\0' && input2[i] != '\0') {
		if (input1[i] != input2[i]) {
			printf("�ٸ���\n");
			return 0;
		}
		i++;
	}

	// �� �� �ϳ��� �� ��� �ٸ� ���ڿ�
	if (input1[i] != '\0' || input2[i] != '\0') {
		printf("�ٸ���\n");
		return 0;
	}

	printf("����\n");
	return 1;
}