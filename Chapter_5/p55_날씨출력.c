#include <stdio.h>

int main() {
    int temperature;

    printf("오늘의 기온을 입력하세요 (도): ");
    scanf("%d", &temperature);

    if (temperature < -10) {
        printf("매우 추운 날씨입니다.\n");
    } else if (temperature >= -10 && temperature < 0) {
        printf("추운 날씨입니다.\n");
    } else if (temperature >= 0 && temperature < 10) {
        printf("쌀쌀한 날씨입니다.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("쾌적한 날씨입니다.\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("더운 날씨입니다.\n");
    } else {
        printf("매우 더운 날씨입니다.\n");
    }

    return 0;
}
