#include <stdio.h>

int main(void)
{
    float f; // 화씨 온도 저장 변수, 정수만 입력하려고 int 자료형으로 선언하면 섭씨 변환 식에서 소수점 이하는 없어진다 ! (수업 자료 3장 p.49)
    float c; // 섭씨 온도 저장 변수

    printf("화씨온도=");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("섭씨온도=%f\n", c);

    return(0);
}
