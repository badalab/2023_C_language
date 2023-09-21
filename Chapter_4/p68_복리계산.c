#include <stdio.h>
#include <math.h>

int main() {
    // 주어진 값들
    double P = 24.0; // 초기 예금 금액 ($)
    double r = 0.06; // 연 이자율 (6%)
    int n = 1;       // 이자 지급 횟수 (1년에 1번)
    int t = 382;     // 기간 (년)

    printf("초기저금액:%lf\n", P);
    printf("이율: %lf%\n", r * 100);
    printf("저축 기간: %d\n", t);

    // 복리 계산
    double A = P * pow(1 + (r / n), n * t);

    printf("382년 후에 원리금 %lf\n", A);

    return 0;
}
