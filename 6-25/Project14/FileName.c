//100000이하의 피보나치 수열의 짝수 항들의 합 구하기
#include <stdio.h>

int main() {
    int a = 1;         // 첫 번째 피보나치 수
    int b = 1;         // 두 번째 피보나치 수
    int next = 0;      // 다음 피보나치 수
    int sum = 0;       // 짝수 항들의 합

    while (next <= 100000) {
        next = a + b;  // 다음 항 계산
        a = b;         // 이전 값을 앞으로 이동
        b = next;      // 현재 값을 앞으로 이동

        if (next % 2 == 0) {  // 짝수인지 확인
            sum += next;      // 짝수면 합에 더하기
        }
    }

    printf("100000 이하 피보나치 수열의 짝수 항들의 합: %d\n", sum);
    return 0;
}
