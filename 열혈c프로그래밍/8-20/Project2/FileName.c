#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point left_up;
	Point right_down;
} Rectangle;

void printarea(Rectangle input) {
	printf("≥–¿Ã:%d\n", (input.right_down.xpos - input.left_up.xpos) * (input.right_down.ypos - input.left_up.ypos) );
}

int main(void) {
	Rectangle input1 = { {1,1},{6,6} };
	Rectangle input2 = { {2,2},{10,15} };
	printarea(input1);
	printarea(input2);
	return 0;
}