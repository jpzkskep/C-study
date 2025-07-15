//약수 구하기
#include <stdio.h>
int main() {
    int n, m;
    int sum = 0, count = 0;
    printf("자연수 n을 입력하세요: ");
    scanf("%d", &n);
    printf("자연수 m을 입력하세요: ");
    scanf("%d", &m);
    printf("1부터 %d까지 중 %d의 배수: ", n, m);
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\n배수의 개수: %d\n", count);
    printf("배수의 총합: %d\n", sum);
    return 0;
}