#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 200;
    
    int tmp; // 교환을 위한 임시 저장 변수
    
    tmp = a; // 임시 변수에 a를 저장해 원래 a의 값이 사라지지 않게 함
    a = b; // a 에 b를 저장한 후
    b = tmp; // 임시 변수에 저장해두었던 a 값을 b에 저장함 
    
    printf("a = %d\nb = %d\n",a,b);

    return(0);
}
