//도전4
//최소 1개 이상 산다고 가정하고 여러가지 경우의 수 나열
#include <stdio.h>
int main(void) {
	int money = 3500, cream = 500, chip = 700, cola = 400;
	printf("현재 당신이 소유하고 있는 금액: 3500\n");
	int left = money - cream - chip - cola;	//최소 1개이상 사는 경우 (left=1900)
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				if (cream * i + chip * j + cola * k == 1900) {
					printf("크림빵:%d 새우깡:%d 콜라:%d\n", i + 1, j + 1, k + 1);
				}
			}
		}
	}
	return 0;
}