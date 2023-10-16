#include <stdio.h>
#include <math.h>

double taylorSeries(double x, int n) {
    double result = 1.0; // 첫 번째 항: 1
    double term = 1.0; // 각 항의 값

    for (int i = 1; i <= n; i++) {
        term *= x / i; // 다음 항 계산
        result += term; // 결과에 더하기
    }

    return result;
}

int main() {
    double x;
    int n;

    printf("x 값을 입력하세요: ");
    scanf("%lf", &x);

    printf("항의 개수 n을 입력하세요: ");
    scanf("%d", &n);

    double approximation = taylorSeries(x, n);

    printf("e^%.2f을 %d개의 항으로 근사한 값은 %.6f입니다.\n", x, n, approximation);

    return 0;
}
