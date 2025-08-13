#include <stdio.h>	//미완료
int main(void) {
	int n;	//n은 50이하
	int num[51][51];
	printf("숫자를 입력하시오:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		num[0][i] = i+1;
	}

}