//사용자로부터 n값을 입력 받고 1부터 n까지의 곱을 출력  //걸린시간 4분
#include <stdio.h>
int main() {
	int a=1,n,sum=1;
	printf("n의 값을 입력하시오 : ");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		sum = sum * a;
	}
	printf("1부터 n까지의 곱은 : %d ",sum);
	return 0;
}