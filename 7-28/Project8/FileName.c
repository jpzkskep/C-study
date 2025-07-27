#include <stdio.h>
struct aa function(int j);
struct aa {
	int i;
};
int main() {
	struct aa a;
	a = function(10);
	printf("a.i:%d\n", a.i);
	return 0;
}
struct aa function(int j) {
	struct aa a;
	a.i = j;
	return a;
}