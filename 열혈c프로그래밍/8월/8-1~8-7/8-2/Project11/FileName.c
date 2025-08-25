#include <stdio.h>
int main(void) {
	int i, j;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i+j== 9) {
				printf("%d %d\n", i, j);
			}
		}
	}
	return 0;
}