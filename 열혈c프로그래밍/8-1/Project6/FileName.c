#include <stdio.h>
int main(void) {
	int num,count=1;
	scanf("%d", &num);
	while (count <= num) {
		printf("%d ", 3 * count);
		count++;
	}
}