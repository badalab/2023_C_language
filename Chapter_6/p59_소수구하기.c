#include <stdio.h>
#include <stdbool.h>

void printPrimes(int n) {
    bool isPrime[n+1];
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    printf("1에서 %d 사이의 소수: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("n을 입력하세요: ");
    scanf("%d", &n);

    printPrimes(n);

    return 0;
}
