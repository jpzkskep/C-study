//������ �ֻ�� ���� ������
#include <stdio.h>

int main() {
    int total = 3;
    int arr[total];  // �� ���Ⱑ �ٽ�!
    int i, ave = 0;

    for (i = 0; i < total; i++) {
        printf("%d ��° �л��� ������? ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < total; i++) {
        ave = ave + arr[i];
    }

    ave = ave / total;
    printf("��ü �л��� ����� : %d \n", ave);

    for (i = 0; i < total; i++) {
        printf("�л�%d : ", i + 1);
        if (arr[i] >= ave)
            printf("�հ�\n");
        else
            printf("���հ�\n");
    }

    return 0;
}
