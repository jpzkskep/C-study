/*
���� �����
1������ + 2������ - 3������ * 4������ / �̶� ��� ����
����� ��ɵ� �־�ߵ�(5) ����� ��� ����
*/
#include <stdio.h>
int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int main() {
    int choice;
    int num1, num2;
    printf("���� 2���� �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);
    for (;;) {
        printf("� ���? (1:+ 2:- 3:* 4:/ 5:����): ");
        scanf("%d", &choice);
        if (choice == 1) {
            num1 = plus(num1, num2);
        }
        else if (choice == 2) {
            num1 = minus(num1, num2);
        }
        else if (choice == 3) {
            num1 = multiply(num1, num2);
        }
        else if (choice == 4) {
            if (num2 == 0) {
                printf("0���� ���� �� �����ϴ�.\n");
                continue;
            }
            num1 = divide(num1, num2);
        }
        else if (choice == 5) {
            printf("����Ǿ����ϴ�.\n");
            break;
        }
        else {
            printf("�Է� ����\n");
            break;
        }
        printf("���� ��: %d\n", num1);
        printf("���� ���ڸ� �Է��Ͻÿ�: ");
        scanf("%d", &num2);
    }
    return 0;
}
int plus(int num1, int num2) {
    return num1 + num2;
}
int minus(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
int divide(int num1, int num2) {
    return num1 / num2;
}