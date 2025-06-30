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
* p1�� const int�� ����Ű�� ������, 
const �� int ���ʿ� �����Ƿ� �� ���� �Ұ�
p2�� int�� ����Ű�� const ������, 
const p2(p2�� �ּ�)�̹Ƿ� �ּ� ���� �Ұ�
p3�� const int�� ����Ű�� const ������, 
const�� int ���ʿ� �����Ƿ� �� ���� �Ұ�, 
const p3(p3�� �ּ�)�̹Ƿ� �ּ� ���� �Ұ� 
������ ������ ���� ���� 1,4,5,6
*/