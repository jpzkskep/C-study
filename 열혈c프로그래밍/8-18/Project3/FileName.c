#include <stdio.h>
struct person {
	char name[20];
	char phonenum[20];
	int age;
};
int main(void) {
	struct person arr[3] = { { "이승기","010-1234-5678",21 }, { "가나다","010-4253-1398",92 },{"알렉스","031-3982-1391",18} };
	for (int i = 0; i < 3; i++) {
		printf("%s %s %d\n", arr[i].name, arr[i].phonenum, arr[i].age);
	}
	return 0;
}
