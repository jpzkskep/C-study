// typedefÀÌ¿ë
#include <stdio.h>
struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};
typedef struct HUMAN Human;
int print_status(Human human);
int main() {
	Human Adam = { 31,182,75,0 };
	Human Eve = { 27,166,48,1 };
	print_status(Adam);
	print_status(Eve);
}
int print_status(Human human) {
	if (human.gender == 0) {
		printf("male\n");
	}
	else {
		printf("female\n");
	}
}