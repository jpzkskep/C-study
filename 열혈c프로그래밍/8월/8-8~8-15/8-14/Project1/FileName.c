#include <stdio.h>  //  틀림

int main(void) {
    int num[50][50] = { 0 }; // 배열 크기는 넉넉하게 설정
    int n;                 // 배열의 크기
    int i, j;

    int x = 0, y = -1; // 현재 위치 (x: 행, y: 열)
    int direction = 1; // 이동 방향 (1: 오른쪽, -1: 왼쪽)
    int value = 1;     // 배열에 채울 숫자
    int size;          // 한 방향으로 이동할 칸의 수

    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);

    size = n; // 처음에는 n칸 이동

    // 숫자를 모두 채울 때까지 반복
    while (size > 0) {
        // 가로 방향으로 이동하며 숫자 채우기
        for (i = 0; i < size; i++) {
            y += direction; // 오른쪽 또는 왼쪽으로 이동
            num[x][y] = value++;
        }

        size--; // 이동할 칸의 수 1 감소

        // 세로 방향으로 이동하며 숫자 채우기
        for (i = 0; i < size; i++) {
            x += direction; // 아래 또는 위로 이동
            num[x][y] = value++;
        }

        direction *= -1; // 방향 전환 (오른쪽 -> 왼쪽, 아래 -> 위)
    }

    // 결과 출력
    printf("\n--- 달팽이 배열 출력 ---\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", num[i][j]); // 4칸에 맞춰 정렬하여 출력
        }
        printf("\n"); // 한 행 출력이 끝나면 줄바꿈
    }

    return 0;
}