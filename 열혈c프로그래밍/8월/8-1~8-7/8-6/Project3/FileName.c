/*����7
���� n�Է¹ް�
2�� k���� n���� �۰ų� ���� k�� �ִ��� ���ϴ� ���α׷�
*/
#include <stdio.h>

int main(void) {
    int n, k;
    long long value = 1; // 2�� 0��

    printf("��� n �Է�:");
    scanf("%d", &n);

    for (k = 0; value <= n; k++) {
        value *= 2; // value�� �׻� 2�� k��
    }
    printf("k�� �ִ밪: %d\n", k );

    return 0;
}
