#include <stdio.h>
int slave(int asset, int income) {
	income += 10000;
	asset += income;
	return asset;
}
int main() {
	int now_asset;
	printf("현재 재산을 입력하시오:");
	scanf("%d", &now_asset);
	printf("\n");
	printf("수입이 들어온 후 재산 %d ", slave(now_asset,0));
	return 0;
}