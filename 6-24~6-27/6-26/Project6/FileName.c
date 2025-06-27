/*
다음식을 만족하는 자연수 a,b,c의 개수를 구하라
1)	a+b+c=2000
2)	a>b>c	a,b,c는 모두 자연수
*/
//14분걸림
#include <stdio.h>
int main() {
	int a, b, c, number=0;
	for (a = 1; a <= 1999; a++) {
		for (b = 1; b <= 1999; b++) {
			for (c = 1; c <= 1999; c++) {
				if (a + b + c == 2000 && ((a>b) &&(b>c))) {
					number = number + 1;
				}
			}
		}
	}
	printf("다음 식을 만족하는 자연수 a,b,c의 개수 : %d", number);
	return 0;
}