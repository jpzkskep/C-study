//함수의 인자
#include <stdio.h>
int slave(int master_money) {
	master_money += 10000;
	return master_money;
}
int main() {
	int my_money = 100000;
	printf("2025.7.4 재산: %d \n", slave(my_money));
	return 0;
}