#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point;
void show(Point pos) {
	printf("[%d %d]\n", pos.xpos, pos.ypos);
}
Point getp(void) {
	Point cen;
	printf("input current pos:");
	scanf("%d %d", & cen.xpos, & cen.ypos);
	return cen;
}
int main(void) {
	Point curpos = getp();
	show(curpos);
	return 0;
}