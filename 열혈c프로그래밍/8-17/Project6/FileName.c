#include <stdio.h>
struct employee {
	char name[50];
	char jumin[50];
	int money;
};
int main(void) {
	struct employee man1;
	fputs("종업원이름:", stdout);
	scanf("%s", man1.name);
	fputs("종업원의 주민등록번호:", stdout);
	scanf("%s", man1.jumin);
	fputs("종업원의 급여정보:", stdout);
	scanf("%d", &(man1.money));
	printf("종업원 이름:%s 종업원 주민번호:%s 종업원 급여:%d", man1.name, man1.jumin, man1.money);
	return 0;
}