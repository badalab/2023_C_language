#include <stdio.h>

int main(void)
{
    int saving; // 저축 금액을 저장할 변수
    int property; // 재산을 저장할 변수
    
    printf("매달 저축 금액을 입력하시오: ");
    scanf("%d", &saving);
    
    property = saving * 12 * 30;
    
    printf("30년 후의 재산 = %d원\n",property);
    
    return 0;
}
