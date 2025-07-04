//마술상자	오류남
#include <stdio.h>
int magicbox() {
	i += 4;
	return 0;
}
int main() {
	int i;
	printf("마술상자에 집어 넣을 값 : ");
	scanf("%d", &i);
	magicbox();
	printf("마술 상자를 지나면 : %d \n", i);
	return 0;
}