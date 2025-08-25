#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point;
typedef struct rectangle {
	Point ul;
	Point lr;
} Rectangle;
void showpos(Rectangle rec) {
	printf("�� ���:[%d %d]\n", rec.ul.xpos, rec.ul.ypos);
	printf("�� �ϴ�:[%d %d]\n", rec.ul.xpos, rec.lr.ypos);
	printf("�� ���:[%d %d]\n", rec.lr.xpos, rec.ul.ypos);
	printf("�� �ϴ�:[%d %d]\n", rec.lr.xpos, rec.lr.ypos);
}
void showarea(Rectangle rec) {
	printf("����:%d\n", (rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}
int main(void) {
	Rectangle rec1 = { {1,1},{4,4} };
	Rectangle rec2 = { {0,0},{7,5} };
	showarea(rec1);
	showpos(rec1);
	showarea(rec2);
	showpos(rec2);
	return 0;
}