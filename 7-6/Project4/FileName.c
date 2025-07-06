/*
계산기 만들기
1누르면 + 2누르면 - 3누르면 * 4누르면 / 이때 모두 정수
지우기 기능도 있어야됨(5) 결과는 계속 누적
*/
#include <stdio.h>
int plus(int num1, int num2);
int minus(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int main() {
    int choice;
    int num1, num2;
    printf("숫자 2개를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    for (;;) {
        printf("어떤 기능? (1:+ 2:- 3:* 4:/ 5:종료): ");
        scanf("%d", &choice);
        if (choice == 1) {
            num1 = plus(num1, num2);
        }
        else if (choice == 2) {
            num1 = minus(num1, num2);
        }
        else if (choice == 3) {
            num1 = multiply(num1, num2);
        }
        else if (choice == 4) {
            if (num2 == 0) {
                printf("0으로 나눌 수 없습니다.\n");
                continue;
            }
            num1 = divide(num1, num2);
        }
        else if (choice == 5) {
            printf("종료되었습니다.\n");
            break;
        }
        else {
            printf("입력 오류\n");
            break;
        }
        printf("현재 값: %d\n", num1);
        printf("다음 숫자를 입력하시오: ");
        scanf("%d", &num2);
    }
    return 0;
}
int plus(int num1, int num2) {
    return num1 + num2;
}
int minus(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
int divide(int num1, int num2) {
    return num1 / num2;
}