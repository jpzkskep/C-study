#include <stdio.h>
int main(void) {
	int repeat = 0, countround = 0;
	while (repeat < 5) {
		while (countround < repeat) {
			printf("o");
			countround++;
		}
		countround = 0;
		printf("*");
		repeat++;
		printf("\n");
	}
}