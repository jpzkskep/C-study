//변수는 최상단 선언 오류문
#include <stdio.h>

int main() {
    int total = 3;
    int arr[total];  // ← 여기가 핵심!
    int i, ave = 0;

    for (i = 0; i < total; i++) {
        printf("%d 번째 학생의 성적은? ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < total; i++) {
        ave = ave + arr[i];
    }

    ave = ave / total;
    printf("전체 학생의 평균은 : %d \n", ave);

    for (i = 0; i < total; i++) {
        printf("학생%d : ", i + 1);
        if (arr[i] >= ave)
            printf("합격\n");
        else
            printf("불합격\n");
    }

    return 0;
}
