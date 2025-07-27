//구조체 포인터
#include <stdio.h>
struct test {
	int a, b;
};
int main() {
	struct test st;
	struct test* ptr;
	ptr = &st;
	(*ptr).a = 1;
	(*ptr).b = 2;
	printf("st의 a멤버 : %d\n", st.a);
	printf("st의 b멤버 : %d\n", st.b);
	return 0;
}