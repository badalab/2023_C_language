#include <stdio.h>

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%d의 약수: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
