/*
���ڿ� 2���� �Է¹޾� ���� �Է¹��� ���ڿ�����
���߿� �Է¹��� ���ڿ��� ��ġ�� �˻��ϴ� �Լ�
���ٸ� -1�� �����ϰ� �ִٸ� �� ��ġ�� ����
*/
//Ʋ��
#include <stdio.h>

int find(char* input1, char* input2);

int main() {
	char input1[100], input2[100];
	printf("1��° ���ڿ� : ");
	scanf("%s", input1);
	printf("2��° ���ڿ� : ");
	scanf("%s", input2);

	int result = find(input1, input2);

	if (result == -1)
		printf("���ԵǾ� ���� �ʽ��ϴ�. -1\n");
	else
		printf("��ġ : %d\n", result);

	return 0;
}

int find(char* input1, char* input2) {
	int i = 0, j, start;

	while (input1[i] != '\0') {
		start = i;
		j = 0;

		// �� ���ڿ��� ��ġ�ϴ��� Ȯ��
		while (input1[start] == input2[j] && input2[j] != '\0') {
			start++;
			j++;
		}

		if (input2[j] == '\0') {
			// ������ �� ������ ���� ��ġ ����
			return i;
		}

		i++;
	}

	return -1; // �� ã��
}
