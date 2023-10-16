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

void findPrimeSumPairs(int num) {
    for (int i = 2; i <= num/2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
        }
    }
}

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%d를 두 소수의 합으로 나타낼 수 있는 경우:\n", num);
    findPrimeSumPairs(num);

    return 0;
}
