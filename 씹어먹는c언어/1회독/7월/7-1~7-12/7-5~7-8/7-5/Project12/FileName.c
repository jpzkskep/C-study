//����� ���ڷ�
#include <stdio.h>
int read_val(const int val);
int main() {
	int a;
	scanf("%d", &a);
	read_val(a);
	return 0;
}
int read_val(const int val) {
	val = 5;	//const �� int���ʿ� �־� ������ �̴�.
	return 0;
}