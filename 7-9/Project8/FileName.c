//���̰� �ִ� 100�� ���ڿ��� �ϳ� �Է¹޾� �������� ���
//����
/*
#include <stdio.h>

int back(char* input);

int main() {
	char input[100];
	printf("���ڿ� �Է� : ");
	scanf("%s", input);
	back(input);
}

int back(char* input) {
	int num = 0;
	while (input[num] != '\0') {
		num++;
	}
	for (num=num-1; num >= 0; num--) {
		printf("%c", input[num]);
	}
	return 0;
}
*/

//���̰� �ִ� 100�� ���ڿ��� �Է¹޾� �ҹ��ڴ� �빮�ڷ�
//�빮�ڴ� �ҹ��ڷ� ����ϴ� �Լ�
/*
#include <stdio.h>

int change(char* inputs);

int main() {
	char input[100];
	printf("���ڿ� �Է� : ");
	scanf("%s", input);
	change(input);
	return 0;
}

int change(char* inputs) {
	int len = 0;
	while (inputs[len] != '\0') {
		if (inputs[len] >= 'A' && inputs[len] <= 'Z') {
			inputs[len] = inputs[len] + 32;  // �빮�� �� �ҹ���
		}
		else if (inputs[len] >= 'a' && inputs[len] <= 'z') {
			inputs[len] = inputs[len] - 32;  // �ҹ��� �� �빮��
		}
		len++;
	}

	printf("��ȯ�� ���ڿ� : %s\n", inputs);
	return 1;
}
*/

//�ΰ��� ���ڿ��� �Է¹޾� ������ ����
//�ٸ��� �ٸ��� ��� ����ϴ� �Լ�
/*
#include <stdio.h>

int ornot(char* input1, char* input2);

int main() {
	int result;
	char input1[100], input2[100];
	printf("���ڿ� 1�� �Է� : ");
	scanf("%s", input1);
	printf("\n");
	printf("���ڿ� 2�� �Է� : ");
	scanf("%s", input2);
	result=ornot(input1, input2);
	if (result == 1) {
		printf("�ٸ���");
	}
	else if (result == 0) {
		printf("����");
	}
	return 0;
}

int ornot(char* input1, char* input2) {
	int len = 0;
	while (input1[len] != '\0' && input2[len] != '\0') {
		if (input1[len] != input2[len]) {
			return 1;
		}
		len++;
	}
	if (input1[len] != input2[len]) {
		return 1;
	}
	return 0;
}
*/

//���ڿ� 2���� �Է¹޾� ���� �Է¹��� ���ڿ����� ���߿� �Է¹���
//���ڿ��� ��ġ�� �˻��ϴ� �Լ�
//���ٸ� -1���� �ִٸ� �� ��ġ�� ����
#include <stdio.h>

int where(char* inputs1, char* inputs2);

int main() {
	char input1[100], input2[100];
	printf("1��° ���ڿ� : ");
	scanf("%s", input1);
	printf("2��° ���ڿ� : ");
	scanf("%s", input2);

	int index = where(input1, input2);
	if (index == -1) {
		printf("�κ� ���ڿ��� �����ϴ�.\n");
	}
	else {
		printf("�κ� ���ڿ� ��ġ : %d\n", index);
	}

	return 0;
}

int where(char* inputs1, char* inputs2) {
	int i, j;

	// i�� inputs1�� ���󰡸�, j�� inputs2�� ����
	for (i = 0; inputs1[i] != '\0'; i++) {
		// ���� ��ġ���� inputs2�� ��ġ�ϴ��� Ȯ��
		for (j = 0; inputs2[j] != '\0'; j++) {
			if (inputs1[i + j] != inputs2[j]) {
				break;  // ��ġ���� ������ �ߴ�
			}
		}

		if (inputs2[j] == '\0') {
			return i;  // ������ �� ��ġ������ i ����
		}
	}

	return -1;  // �� ã������ -1 ����
}
