//자연수 n을 입력받아 n을 소인수 분해 한 결과를 출력
#include <stdio.h>
int main() {
    int n, divide = 2;
    printf("n을 입력하시오 : ");
    scanf("%d", &n);
    printf("%d=", n);
    while (n > 1) {
        if (n % divide == 0) {
            printf("%d", divide);
            n = n / divide;
            if (n > 1) {
                printf("*");
            }
        }
        else {
            divide++;
        }
    }
    return 0;
}