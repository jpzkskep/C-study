//2���� ���ڿ��� ���ϴ� �Լ��� ���� ������ 1 �ٸ��� 0 ����
//Ʋ��
#include <stdio.h>

int compareString(char* str1, char* str2);

int main() {
    char a[100], b[100];

    printf("ù ��° ���ڿ� �Է�: ");
    scanf("%s", a);

    printf("�� ��° ���ڿ� �Է�: ");
    scanf("%s", b);

    if (compareString(a, b)) {
        printf("�� ���ڿ��� �����ϴ�.\n");
    }
    else {
        printf("�� ���ڿ��� �ٸ��ϴ�.\n");
    }

    return 0;
}

int compareString(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }

    // �� ���ڿ� ���̵� ���ƾ� ��
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}