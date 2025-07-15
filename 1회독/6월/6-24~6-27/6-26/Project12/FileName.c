/*1000이하의 자연수중 각자리수의 합이 10인 수들만 출력
그 수들의 개수와 총합 구하기
*/
#include <stdio.h>
int main() {
    int count = 0, sum = 0;
    int number = 1;
    while (number <= 1000) {
        int fn = number / 100;
        int sn = (number / 10) % 10;
        int tn = number % 10;
        if (fn + sn + tn == 10) {
            printf("%d ", number);  // 공백 추가
            count = count + 1;
            sum = sum + number;
        }
        number++;
    }
    printf("\n개수: %d  \n", count);
    printf("총합: %d \n", sum);
    return 0;
}