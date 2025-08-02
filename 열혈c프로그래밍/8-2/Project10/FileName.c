#include <stdio.h>
int main(void) {
	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 1) continue;
		for (int j = 1; j <= i; j++) {
			if (j % 2 == 1) continue;
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}