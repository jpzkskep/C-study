#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* input;
    int len, maxlen;

    printf("문자열의 최대길이입력:");
    scanf("%d", &maxlen);

    input = (char*)malloc(sizeof(char) * maxlen);

    printf("문자열 입력");
    scanf("%s", input);

    len = strlen(input);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    free(input);
    return 0;
}