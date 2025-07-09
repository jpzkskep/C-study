/*
길이가 최대 100인 문자열을 하나 입력받고 역순으로 출력하는 함수
*/
//틀림
#include <stdio.h>

int back(char* number);

int main() {
    char input[100];
    printf("문자열을 입력하시오 : ");
    scanf("%s", input);
    printf("\n");
    back(input);
    return 0;
}

int back(char* number) {
    int len = 0;

    // 문자열 길이 수동으로 계산 (strlen 없이)
    while (number[len] != '\0') {
        len++;
    }

    // 뒤에서부터 출력
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", number[i]);
    }
    printf("\n");
    return 1;
}