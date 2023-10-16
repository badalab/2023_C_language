#include <stdio.h>

int main() {
    int days = 30;
    double amount = 0.01; // 시작 금액은 1원

    for (int i = 1; i <= days; i++) {
        printf("Day %d: %.2f원\n", i, amount);
        amount *= 2; // 전날의 두 배 금액을 받음
    }

    return 0;
}
