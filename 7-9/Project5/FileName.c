/*
���̰� �ִ� 100�� ���ڿ��� �Է¹޾� �ҹ��ڴ� �빮�ڷ�
�빮�ڴ� �ҹ��ڷ� ����ϴ� �Լ�
*/
//Ʋ��
#include <stdio.h>

int change_case(char* str);

int main() {
    char input[100];
    printf("���ڿ��� �Է��Ͻÿ� : ");
    scanf("%s", input);
    change_case(input);
    return 0;
}

int change_case(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // �ҹ��� �� �빮��
            str[i] = str[i] - ('a' - 'A');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            // �빮�� �� �ҹ���
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    printf("���: %s\n", str);
    return 0;
}