/*
�������� �����ϴ� �ڿ��� a,b,c�� ���� ���ϱ�
1) a+b+c=2000
2) a>b>c> a,b,c�� ��� �ڿ���
*/
#include <stdio.h>

int main() {
    int a, b, c, number = 0;
    for (a = 1; a < 2000; a++) {
        for (b = 1; b < a; b++) {
            for (c = 1; c < b; c++) {
                if (a + b + c == 2000) {
                    number++;
                }
            }
        }
    }
    printf("������ �����ϴ� (a,b,c)�� ������: %d��\n", number);
    return 0;
}
