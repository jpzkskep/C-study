#include <stdio.h>
struct employee {
	char name[50];
	int age;
};
int main(void) {
	struct employee arr[3];
	for (int i = 0; i < 3; i++) {
		printf("사람%d의 정보를 입력하시오(이름,나이):",i+1);
		scanf("%s %d", arr[i].name, &arr[i].age);
	}
	for (int i = 0; i < 3; i++) {
		printf("사람 %d의 이름:%s 나이:%d\n", i + 1, arr[i].name, arr[i].age);
	}
	return 0;
}