#include <stdio.h>
struct test {
	int i;
	char c;
};
int main() {
	struct test st, st2;
	st.i = 1;
	st.c = 'c';
	st2 = st;
	printf("st2.i : %d \n", st2.i);
	printf("st2.c : %c \n", st2.c);
	return 0;
}