// pragma
#include <stdio.h>
#pragma pack(1)
struct weird {
	char arr[2];
	int i;
};
int main() {
	struct weird a;
	printf("size of a : %d \n", sizeof(a));
	return 0;
}