//헷갈림
#include <stdio.h>
struct test {
	int c;
	int* pointer;
};
int main() {
	struct test t;
	struct test* pt = &t;
	int i = 0;
	t.pointer = &i;	//t의 멤버 pointer은 i를 가르킴
	*t.pointer = 3;	//t의 멤버 pointer가 가르키는 변수의 값을 3으로
	printf("i : %d \n", i);
	//	->가 *보다 우선 순위가 높다
	//즉 pt가 가르키는 구조체 변수의 pointer 멤버가 가르키는
	//변수의 값을 4로 바꾼다
	*pt->pointer = 4;
	printf("i : %d \n",i);
	return 0;
}