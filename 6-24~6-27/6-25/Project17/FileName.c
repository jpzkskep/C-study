//������ �ڿ��� n�� �Է¹޾� n�� ���μ� ���� �� ����� ���
#include <stdio.h>
int main() {
    int num, i = 2;
    printf("n�� �Է��Ͻÿ�: ");
    scanf("%d", &num);
    printf("%d = ", num);
    int first = 1; 
    while (num > 1) {
        if (num % i == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", i);
            num = num / i;
            first = 0;
        }
        else {
            i++;
        }
    }
    printf("\n");
    return 0;
}