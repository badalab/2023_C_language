#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    printf("가위(0), 바위(1), 보(2) 중 하나를 선택하세요: ");
    scanf("%d", &userChoice);

    // 무작위로 컴퓨터의 선택을 생성
    srand(time(NULL));
    computerChoice = rand() % 3;

    // 사용자와 컴퓨터의 선택 출력
    printf("사용자: ");
    switch (userChoice) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
        default:
            printf("올바른 선택이 아닙니다.\n");
            return 1;
    }

    printf("컴퓨터: ");
    switch (computerChoice) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
    }

    // 결과 계산
    if (userChoice == computerChoice) {
        printf("비겼습니다!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("사용자 승!\n");
    } else {
        printf("컴퓨터 승!\n");
    }

    return 0;
}
