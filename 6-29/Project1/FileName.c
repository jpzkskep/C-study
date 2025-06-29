//3명의 학생의 성적을 입력받고 성적을 높은순으로 정렬
#include <stdio.h>
int main() {
    int student[3]; 
    int temp;
    for (int i = 0; i < 3; i++) {
        printf("%d번째 학생의 성적: ", i + 1);
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
    printf("\n성적 높은 순:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", student[i]);
    }
    return 0;
}