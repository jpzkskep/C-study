//num1���� num2�� num2���� num3�� num3���� num1�� ����
#include <stdio.h>
int Swap3(int* input1, int* input2, int* input3);
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("num1 num2 num3: %d %d %d", num1, num2, num3);
}
int Swap3(int* input1, int* input2, int* input3) {
	int temp1,temp2,temp3;
	temp1 = *input1;
	temp2 = *input2;
	temp3 = *input3;
	*input1 = temp3;
	*input2 = temp1;
	*input3 = temp2;
}