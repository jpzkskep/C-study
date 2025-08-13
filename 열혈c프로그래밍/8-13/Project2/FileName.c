#include <stdio.h>
void showallstring(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}
int main(void) {
	char* str[3] = { "c program","c++","java" };
	showallstring(3, str);
	return 0;
}