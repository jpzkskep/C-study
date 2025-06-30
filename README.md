# C-study
1학년 1학기 여름방학 c언어 학습 기록

사용한교재:https://modoocode.com/187

scanf사용 sdl검사 항상 끄기

p=&a;

*p=3;

p에 변수a의주소 집어넣음

*p를통해 나에 저장된주소(변수a의주소)에 해당하는 데이터(변수a)로 생각하시오

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    const int* p1 = &a;
    int* const p2 = &b;
    const int* const p3 = &c;

    *p1 = 100;   // (1)
    p1 = &b;     // (2)

    *p2 = 200;   // (3)
    p2 = &c;     // (4)

    *p3 = 300;   // (5)
    p3 = &a;     // (6)

    return 0;
}
/*
* p1은 const int를 가르키는 포인터, 
const 가 int 왼쪽에 있으므로 값 변경 불가
p2은 int를 가르키는 const 포인터, 
const p2(p2은 주소)이므로 주소 변경 불가
p3은 const int를 가르키는 const 포인터, 
const가 int 왼쪽에 있으므로 값 변경 불가, 
const p3(p3은 주소)이므로 주소 변경 불가 
컴파일 에러가 나는 줄은 1,4,5,6
*/
