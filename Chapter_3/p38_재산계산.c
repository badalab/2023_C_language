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

// 저축액을 1000만원으로 늘리면 36억으로, int 자료형에 저장할 수 있는 값보다 커져 오버플로우 발생
