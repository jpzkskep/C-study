//임의의 자연수 n을 입력받아 n을 소인수분해한 결과 출력
#include <stdio.h>
int main() {
    int n, divide = 2;
    printf("n을 입력하시오 : ");
    scanf("%d", &n);
    printf("%d=", n);
    int first = 1; 
    while (n > 1) {
        if (n % divide == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", divide);
            n = n / divide;
            first = 0;
        }
        else {
            divide++;
        }
    }
    return 0;
}