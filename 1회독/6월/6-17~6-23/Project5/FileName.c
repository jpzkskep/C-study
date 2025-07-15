//변수 선언시 주의해야 할 점
#include <stdio.h>
int main() {
	int a, A;	//a와A는 다른 변수
	int 1hi;	//(오류)숫자가 앞에 위치할수 없음
	int hi123, h133i, h1342;	//숫자가 뒤에 오면 괜찮음
	int space bar;	//(오류)변수는 오직 알파벳,숫자,그리고_로만 이루어져야됨
	int space_bar;	//이건 괜찮음
	int enum, long, double, int;	/*(오류) 이것들은 모두 예약어 파란색으로 표시되는것들은 모두 예약어라 쓸수없음*/
	return 0;
}