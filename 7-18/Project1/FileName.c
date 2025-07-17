//소수 개수 찾는 프로그램(시작값 종료값 입력) 최소1 최대 1000
#include <stdio.h>

int main() {
    int start, end;
    int prime[1001] = { 0 }; // 0: 소수, 1: 소수 아님
    int many = 0;

    scanf("%d %d", &start, &end);

    // 0과 1은 소수가 아님
    prime[0] = prime[1] = 1;

    // 에라토스테네스의 체
    for (int i = 2; i * i <= 1000; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= 1000; j += i) {
                prime[j] = 1; // 소수가 아님
            }
        }
    }

    // start부터 end까지 소수 개수 세기
    for (int i = start; i <= end; i++) {
        if (prime[i] == 0) {
            many++;
        }
    }

    printf("%d 부터 %d까지 소수의 개수는 %d개", start, end, many);
    return 0;
}
