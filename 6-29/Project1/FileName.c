//3���� �л��� ������ �Է¹ް� ������ ���������� ����
#include <stdio.h>
int main() {
    int student[3]; 
    int temp;
    for (int i = 0; i < 3; i++) {
        printf("%d��° �л��� ����: ", i + 1);
        scanf("%d", &student[i]);
    }
    for (int i = 0; i < 2; i++) { 
        for (int j = i + 1; j < 3; j++) { 
            if (student[i] < student[j]) {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    printf("\n���� ���� ��:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", student[i]);
    }
    return 0;
}