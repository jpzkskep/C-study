#include <stdio.h>
struct point {
	int xpos;
	int ypos;
};
struct person {
	char name[20];
	char phonenum[20];
	int age;
};
int main(void) {
	struct point pos = { 10,20 };
	struct person man = { "ÀÌ½Â±â","010-1234-1234",21 };
	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);
	return 0;
}