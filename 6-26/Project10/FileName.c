//������ �ڿ��� n�� �Է¹޾� n�� ���μ������� ��� ���
#include <stdio.h>
int main() {
    int n, divide = 2;
    printf("n�� �Է��Ͻÿ� : ");
    scanf("%d", &n);
    printf("%d=", n);
    int first = 1; 
    while (n > 1) {
        if (n % divide == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", divide);
            n = n / divide;
            first = 0;
        }
        else {
            divide++;
        }
    }
    return 0;
}