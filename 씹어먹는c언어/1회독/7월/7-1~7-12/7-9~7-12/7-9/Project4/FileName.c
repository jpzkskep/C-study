/*
���̰� �ִ� 100�� ���ڿ��� �ϳ� �Է¹ް� �������� ����ϴ� �Լ�
*/
//Ʋ��
#include <stdio.h>

int back(char* number);

int main() {
    char input[100];
    printf("���ڿ��� �Է��Ͻÿ� : ");
    scanf("%s", input);
    printf("\n");
    back(input);
    return 0;
}

int back(char* number) {
    int len = 0;

    // ���ڿ� ���� �������� ��� (strlen ����)
    while (number[len] != '\0') {
        len++;
    }

    // �ڿ������� ���
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", number[i]);
    }
    printf("\n");
    return 1;
}