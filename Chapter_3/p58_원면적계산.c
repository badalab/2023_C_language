#include <stdio.h>

int main(void)
{
    float r; // 반지름 저장 변수
    double area; // 면적 저장 변수
    double PI = 3.141592; // 원주율 저장 변수, float 자료형은 유효 숫자가 6자리이기 때문에 double 자료형으로 선언. (수업 자료 3장 p.45)
    
    printf("원의 반지름을 입력하시요:");
    scanf("%f",&r);
    
    area = r * r * PI;
    
    printf("원의 면적:%.6lf",area);
    
    return(0);
}
