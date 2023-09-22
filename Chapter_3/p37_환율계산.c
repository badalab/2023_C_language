#include <stdio.h>

int main(void)
{
    int won; // 원화를 저장할 변수
    int dollar; // 달러를 저장할 변수
    int rate = 1336;
    
    printf("달러화 금액을 입력하시오: ");
    scanf("%d", &dollar);
    
    won = dollar * rate;
    
    printf("달러화 %d달러는 %d원입니다.\n",dollar,won);
    
    return 0;
}
