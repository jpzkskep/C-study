//���� ���� �ڰ� �ɻ��
#include <stdio.h>
int main() {
    float grade;
    int hour;
    char career;
    char license;
    printf("�����������,����ð�,���� ���(Y�Ǵ� N) �ܱ��� �ڰ��� (Y�Ǵ� N)�� �Է��Ͻÿ�:");
    scanf("%f %d %c %c", &grade, &hour, &career, &license);
    if (grade >= 80 && hour >= 30) {
        if (career == 'Y' || license == 'Y') {
            printf("�������� + ������ ����");
        }
        else {
            printf("��������");
        }
    }
    else {
        printf("���� �Ұ�");
    }
    return 0;
}
