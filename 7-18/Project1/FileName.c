//�Ҽ� ���� ã�� ���α׷�(���۰� ���ᰪ �Է�) �ּ�1 �ִ� 1000
#include <stdio.h>

int main() {
    int start, end;
    int prime[1001] = { 0 }; // 0: �Ҽ�, 1: �Ҽ� �ƴ�
    int many = 0;

    scanf("%d %d", &start, &end);

    // 0�� 1�� �Ҽ��� �ƴ�
    prime[0] = prime[1] = 1;

    // �����佺�׳׽��� ü
    for (int i = 2; i * i <= 1000; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= 1000; j += i) {
                prime[j] = 1; // �Ҽ��� �ƴ�
            }
        }
    }

    // start���� end���� �Ҽ� ���� ����
    for (int i = start; i <= end; i++) {
        if (prime[i] == 0) {
            many++;
        }
    }

    printf("%d ���� %d���� �Ҽ��� ������ %d��", start, end, many);
    return 0;
}
