#include <stdio.h>
int main(void) {
	int x1, y1, x2, y2,area;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - y1);
	printf("≥–¿Ã:%d", area);
	return 0;
}