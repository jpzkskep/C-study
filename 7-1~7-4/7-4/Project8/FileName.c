#include <stdio.h>
int slave(int asset, int income) {
	income += 10000;
	asset += income;
	return asset;
}
int main() {
	int now_asset;
	printf("���� ����� �Է��Ͻÿ�:");
	scanf("%d", &now_asset);
	printf("\n");
	printf("������ ���� �� ��� %d ", slave(now_asset,0));
	return 0;
}