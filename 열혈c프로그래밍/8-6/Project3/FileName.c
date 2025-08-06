/*도전7
숫자 n입력받고
2의 k승이 n보다 작거나 같은 k의 최댓값을 구하는 프로그램
*/
#include <stdio.h>

int main(void) {
    int n, k;
    long long value = 1; // 2의 0승

    printf("상수 n 입력:");
    scanf("%d", &n);

    for (k = 0; value <= n; k++) {
        value *= 2; // value는 항상 2의 k승
    }
    printf("k의 최대값: %d\n", k );

    return 0;
}
