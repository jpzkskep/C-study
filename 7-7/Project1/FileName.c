//�����佺�׳׽��� ü�� �̿��ؼ� 1���� n������ �Ҽ��� ���ϴ� ���α׷�
//Ʋ��
#include <stdio.h>
int che(int first, int second); // �Լ� ����
int main() {
    int n;
    printf("n�� �Է��Ͻÿ� : ");
    scanf("%d", &n);
    che(1, n);
    return 0;
}
int che(int first, int second) {
    int prime[1000] = { 0 }; // 0�̸� �Ҽ�, 1�̸� ���� ��
    int i, j;
    prime[0] = 1;
    prime[1] = 1;
    for (i = 2; i <= second; i++) {
        if (prime[i] == 0) {
            // i�� ����� ��� ����
            for (j = i * 2; j <= second; j += i) {
                prime[j] = 1;
            }
        }
    }
    printf("1���� %d������ �Ҽ� :\n", second);
    for (i = first; i <= second; i++) {
        if (prime[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}