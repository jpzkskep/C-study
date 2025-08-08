#include <stdio.h>
int main(void) {
	int total=0, num = 0;
	while (num <= 100) {
		if (num % 2 == 0) total += num;
		num++;
	}
	printf("%d", total);
	return 0;
}