/*
���� 5���� �Է¹޾� ����� ���ϰ�,
�� ��պ��� ū ���� ����ϴ� ���α׷��� �ۼ�
*/
#include <stdio.h>
int main() {
    int arr[5];
    int sum = 0;
    float average;
    printf("���� 5�� �Է�: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / 5;
    printf("��պ��� ū ��: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] > average) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}