//문제2 복습
#include <stdio.h>
int main() {
    int n, a, b;
    printf("n줄인 역삼각형을 출력 : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++) {
        for (b = 1; b < a; b++) {
            printf(" ");
        }
        for (b = 1; b <= 2 * (n - a) + 1; b++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}