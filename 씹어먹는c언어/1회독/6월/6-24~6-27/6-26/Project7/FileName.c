//�ڿ��� n�� �Է¹޾� n�� ���μ� ���� �� ����� ���
#include <stdio.h>
int main() {
    int n, divide = 2;
    printf("n�� �Է��Ͻÿ� : ");
    scanf("%d", &n);
    printf("%d=", n);
    while (n > 1) {
        if (n % divide == 0) {
            printf("%d", divide);
            n = n / divide;
            if (n > 1) {
                printf("*");
            }
        }
        else {
            divide++;
        }
    }
    return 0;
}