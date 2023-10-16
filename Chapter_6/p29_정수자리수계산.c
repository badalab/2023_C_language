#include <stdio.h>

int main() {
    int number;
    int totalDigits = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    // 0을 입력받을 때까지 반복
    while (number != 0) {
        totalDigits++;
        number = number / 10; // 마지막 자릿수를 제거하기 위해 10으로 나눔
    }

    printf("입력한 정수의 총 자릿수는 %d입니다.\n", totalDigits);

    return 0;
}
1234
