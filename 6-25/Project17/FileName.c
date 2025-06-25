//임의의 자연수 n을 입력받아 n을 소인수 분해 한 결과를 출력
#include <stdio.h>
int main() {
    int num, i = 2;
    printf("n을 입력하시오: ");
    scanf("%d", &num);
    printf("%d = ", num);
    int first = 1; 
    while (num > 1) {
        if (num % i == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", i);
            num = num / i;
            first = 0;
        }
        else {
            i++;
        }
    }
    printf("\n");
    return 0;
}