//��� ���ϱ�
#include <stdio.h>
int main() {
    int n, m;
    int sum = 0, count = 0;
    printf("�ڿ��� n�� �Է��ϼ���: ");
    scanf("%d", &n);
    printf("�ڿ��� m�� �Է��ϼ���: ");
    scanf("%d", &m);
    printf("1���� %d���� �� %d�� ���: ", n, m);
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\n����� ����: %d\n", count);
    printf("����� ����: %d\n", sum);
    return 0;
}