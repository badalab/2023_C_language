#include <stdio.h>

int main() {
    int totalDays, years, months, days;

    // 사용자로부터 근무한 일수를 입력받음
    printf("근무한 일수를 입력하세요: ");
    scanf("%d", &totalDays);

    // 년, 달, 일을 계산
    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    days = totalDays % 30;

    // 결과 출력
    printf("근무한 기간은 %d년 %d개월 %d일입니다.\n", years, months, days);

    return 0;
}
