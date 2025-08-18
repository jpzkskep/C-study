#include <stdio.h>
struct point {
	int xpos;
	int ypos;
};
typedef struct point Point;
typedef struct person {
	char name[20];
	char phonenum[20];
	int age;
} Person;
int main(void) {
	Point pos = { 10,20 };
	Person man = { "°¡³ª´Ù","010-1234-5678",21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phonenum, man.age);
	return 0;
}