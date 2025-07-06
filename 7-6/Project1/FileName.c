/*
사용자로 부터5 명의학생의수학, 국어, 영어점수를입력받아서
평균이가장높은사람부터 평균이가장낮은사람까지
정렬되어출력하도록하세요. 
특히,평균을기준으로평균이상인사람 옆에는’합격’, 
아닌사람은’불합격’ 을출력하게해보세요
*/
#include <stdio.h>
int average(int avr1, int avr2, int avr3);
int is_pass(int avr, int all);
int high_low(int* number);
int main() {
	int student[5][3];
	int avr[5];
	int all_avr;
	for (int i = 0; i < 5; i++) {
		printf("학생 %d의 수학,국어,영어 점수를 입력하시오 : ",i+1);
		for (int j = 0; j < 3; j++) {
			scanf(" %d", &student[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		avr[i] = average(student[i][0],student[i][1],student[i][2]);
	}
	all_avr = (avr[0] + avr[1] + avr[2] + avr[3] + avr[4])/5;

	printf("전체 평균 : %d \n", all_avr);

	for (int i = 0; i < 5; i++) {
		printf("학생 %d의 평균 : %d ", i + 1, avr[i]);
		if (is_pass(avr[i], all_avr)) {
			printf(" 합격 \n");
		}
		else {
			printf( "불합격 \n");
		}
	}

	for (int i = 0; i < 5; i++) {
		high_low(avr);
	}

	for (int i = 0; i < 5; i++) {
		printf("학생%d : %d점 ",i+1, avr[i]);
	}
	return 0;
}
int average(int avr1,int avr2, int avr3) {
	int avr;
	avr = (avr1+avr2+avr3) / 3;
	return avr;
}
int is_pass(int avr,int all) {
	if (avr >= all) {
		return 1;
	}
	else {
		return 0;
	}
}
int high_low(int *number) {
	int temp;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (number[j] > number[i]) {
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	return 0;
}