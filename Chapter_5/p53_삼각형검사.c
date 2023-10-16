#include <stdio.h>

int main() {
    int a, b, c;

    printf("세 변의 길이를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("유효한 삼각형입니다.\n");
    } else {
        printf("유효한 삼각형이 아닙니다.\n");
    }

    return 0;
}
