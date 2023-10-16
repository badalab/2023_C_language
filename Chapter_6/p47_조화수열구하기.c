#include <stdio.h>

int main() {
    int n = 100000000;
    double sum = 0.0;
   
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("조화 수열의 합 (n=%d): %f\n", n, sum);

    return 0;
}
