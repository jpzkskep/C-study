//2개의 문자열을 비교하는 함수를 만들어서 같으면 1 다르면 0 리턴
//틀림
#include <stdio.h>

int compareString(char* str1, char* str2);

int main() {
    char a[100], b[100];

    printf("첫 번째 문자열 입력: ");
    scanf("%s", a);

    printf("두 번째 문자열 입력: ");
    scanf("%s", b);

    if (compareString(a, b)) {
        printf("두 문자열은 같습니다.\n");
    }
    else {
        printf("두 문자열은 다릅니다.\n");
    }

    return 0;
}

int compareString(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }

    // 두 문자열 길이도 같아야 함
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}