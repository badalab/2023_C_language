#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false; // 2 미만의 수는 소수가 아님
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false; // 약수가 있으면 소수가 아님
        }
    }
    return true;
}

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d는 소수입니다.\n", num);
    } else {
        printf("%d는 소수가 아닙니다.\n", num);
    }

    return 0;
}
