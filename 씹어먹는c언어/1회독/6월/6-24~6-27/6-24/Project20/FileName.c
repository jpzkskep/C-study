//대학 지원 자격 심사기
#include <stdio.h>
int main() {
    float grade;
    int hour;
    char career;
    char license;
    printf("내신평균점수,봉사시간,수상 경력(Y또는 N) 외국어 자격증 (Y또는 N)을 입력하시오:");
    scanf("%f %d %c %c", &grade, &hour, &career, &license);
    if (grade >= 80 && hour >= 30) {
        if (career == 'Y' || license == 'Y') {
            printf("지원가능 + 가산점 있음");
        }
        else {
            printf("지원가능");
        }
    }
    else {
        printf("지원 불가");
    }
    return 0;
}
