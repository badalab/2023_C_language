#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    printf("피보나치 수열의 몇 번째 항을 출력할까요? ");
    scanf("%d", &n);

    if (n < 0) {
        printf("음수를 입력할 수 없습니다.\n");
        return 1;
    }

    printf("피보나치 수열의 %d번째 항은 %d입니다.\n", n, fibonacci(n));

    return 0;
}
