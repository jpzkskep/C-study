//�Լ��� ����2
#include <stdio.h>
int slave(int my_money) {
	my_money += 10000;
	return my_money;
}
int main() {
	int my_money = 100000;
	printf("��� : %d \n", slave(my_money));
	printf("my_money : %d", my_money);
	return 0;
}