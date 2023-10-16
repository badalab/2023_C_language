#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    int guess;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));
    // 1부터 100 사이의 난수 생성
    secretNumber = rand() % 100 + 1;

    printf("1부터 100 사이의 정수가 저장되었습니다. 이 정수를 맞혀보세요.\n");

    do {
        printf("정수를 입력하세요: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("너무 큽니다.\n");
        } else if (guess < secretNumber) {
            printf("너무 작습니다.\n");
        } else {
            printf("정답입니다! 축하합니다!\n");
        }
    } while (guess != secretNumber);

    return 0;
}
