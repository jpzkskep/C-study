/*
다음식을 만족하는 자연수 a,b,c의 개수 구하기
1) a+b+c=2000
2) a>b>c> a,b,c는 모두 자연수
*/
#include <stdio.h>

int main() {
    int a, b, c, number = 0;
    for (a = 1; a < 2000; a++) {
        for (b = 1; b < a; b++) {
            for (c = 1; c < b; c++) {
                if (a + b + c == 2000) {
                    number++;
                }
            }
        }
    }
    printf("조건을 만족하는 (a,b,c)의 개수는: %d개\n", number);
    return 0;
}
