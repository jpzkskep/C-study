#include <stdio.h>
int main(void) {
	char name[50];
	char jumin[50];
	char phone[50];
	char food[50];
	char hobby[50];

	FILE* output = fopen("input.txt", "rt");
	/*
	FILE* input = fopen("input.txt", "wt");

	printf("이름:");
	scanf("%s", name);
	printf("주민번호:");
	scanf("%s", jumin);
	printf("전화번호:");
	scanf("%s", phone);
	printf("음식:");
	scanf("%s", food);
	printf("취미:");
	scanf("%s", hobby);

	fputs("#이름: ", input);
	fputs(name, input);
	fputs("\n", input);
	fputs("#주민번호: ", input);
	fputs(jumin, input);
	fputs("\n", input);
	fputs("#전화번호: ", input);
	fputs(phone, input);
	fputs("\n", input);
	fputs("#즐겨먹는 음식: ", input);
	fputs(food, input);
	fputs("\n", input);
	fputs("#취미: ", input);
	fputs(hobby, input);
	
	*/
	fgets(name, sizeof(name), output);
	printf("%s", name);
	fgets(jumin, sizeof(jumin), output);
	printf("%s", jumin);
	fgets(phone, sizeof(phone), output);
	printf("%s", phone);
	fgets(food, sizeof(food), output);
	printf("%s", food);
	fgets(hobby, sizeof(hobby), output);
	printf("%s", hobby);
	return 0;
}