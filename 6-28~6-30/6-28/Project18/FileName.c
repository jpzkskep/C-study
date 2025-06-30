/*
정수 5개를 입력받아 평균을 구하고,
그 평균보다 큰 수만 출력하는 프로그램을 작성
*/
#include <stdio.h>
int main() {
    int arr[5];
    int sum = 0;
    float average;
    printf("정수 5개 입력: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / 5;
    printf("평균보다 큰 수: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] > average) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}