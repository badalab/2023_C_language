#include <stdio.h>

int main(void)
{
    int age, id, production;
    double stars;
    char alphabet;

    printf("나이를 입력하시오: ");
    scanf("%d", &age);
    printf("나이: %d\n", age);

    printf("직원 아이디를 입력하시오: ");
    scanf("%d", &id);
    printf("아이디: %d\n", id);

    printf("생산량을 입력하시오: ");
    scanf("%d", &production);
    printf("생산량: %d\n", production);

    printf("별의 개수를 입력하시오: ");
    scanf("%lf", &stars);
    printf("별의 개수: %e\n", stars);

    getchar(); // 뒤에서 %c를 입력 받기 때문에 입력 버퍼에 남아있는 줄바꿈 문자를 없앤다.

    printf("글자를 입력하시오: ");
    scanf("%c", &alphabet);
    printf("글자: %c\n", alphabet);

    return(0);
}
