/*
길이가 최대 100인 문자열을 입력받아 소문자는 대문자로
대문자는 소문자로 출력하는 함수
*/
//틀림
#include <stdio.h>

int change_case(char* str);

int main() {
    char input[100];
    printf("문자열을 입력하시오 : ");
    scanf("%s", input);
    change_case(input);
    return 0;
}

int change_case(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // 소문자 → 대문자
            str[i] = str[i] - ('a' - 'A');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            // 대문자 → 소문자
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    printf("결과: %s\n", str);
    return 0;
}