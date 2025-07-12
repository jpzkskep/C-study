//에라토스테네스의 체를 이용해서 1부터 n까지의 소수를 구하는 프로그램
//틀림
#include <stdio.h>
int che(int first, int second); // 함수 선언
int main() {
    int n;
    printf("n을 입력하시오 : ");
    scanf("%d", &n);
    che(1, n);
    return 0;
}
int che(int first, int second) {
    int prime[1000] = { 0 }; // 0이면 소수, 1이면 지운 수
    int i, j;
    prime[0] = 1;
    prime[1] = 1;
    for (i = 2; i <= second; i++) {
        if (prime[i] == 0) {
            // i의 배수를 모두 지움
            for (j = i * 2; j <= second; j += i) {
                prime[j] = 1;
            }
        }
    }
    printf("1부터 %d까지의 소수 :\n", second);
    for (i = first; i <= second; i++) {
        if (prime[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}