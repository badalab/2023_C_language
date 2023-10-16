#include <stdio.h>

double CtoF(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius, fahrenheit;

    printf("섭씨 온도를 입력하세요: ");
    scanf("%lf", &celsius);

    fahrenheit = CtoF(celsius);

    printf("%.2f도 섭씨는 %.2f도 화씨입니다.\n", celsius, fahrenheit);

    return 0;
}
