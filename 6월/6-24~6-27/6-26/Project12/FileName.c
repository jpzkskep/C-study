/*1000������ �ڿ����� ���ڸ����� ���� 10�� ���鸸 ���
�� ������ ������ ���� ���ϱ�
*/
#include <stdio.h>
int main() {
    int count = 0, sum = 0;
    int number = 1;
    while (number <= 1000) {
        int fn = number / 100;
        int sn = (number / 10) % 10;
        int tn = number % 10;
        if (fn + sn + tn == 10) {
            printf("%d ", number);  // ���� �߰�
            count = count + 1;
            sum = sum + number;
        }
        number++;
    }
    printf("\n����: %d  \n", count);
    printf("����: %d \n", sum);
    return 0;
}