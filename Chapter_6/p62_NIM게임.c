#include <stdio.h>

int main() {
    int sticks = 12; // 초기 스틱 개수

    while (1) {
        // 사용자 차례
        int userPick;
        do {
            printf("현재 %d개의 스틱이 있습니다. 1에서 3개까지 선택하세요: ", sticks);
            scanf("%d", &userPick);
        } while (userPick < 1 || userPick > 3 || userPick > sticks);

        sticks -= userPick;

        // 게임 종료 확인
        if (sticks <= 0) {
            printf("사용자가 마지막 스틱을 가져가서 컴퓨터가 이겼습니다!\n");
            break;
        }

        // 컴퓨터 차례
        int computerPick = sticks % 4; // 컴퓨터가 선택할 스틱 수 계산
        if (computerPick == 0) computerPick = 1; // 컴퓨터가 마지막 스틱을 가져가게끔 조정

        printf("컴퓨터가 %d개의 스틱을 가져갔습니다.\n", computerPick);
        sticks -= computerPick;

        // 게임 종료 확인
        if (sticks <= 0) {
            printf("컴퓨터가 마지막 스틱을 가져가서 사용자가 이겼습니다!\n");
            break;
        }
    }

    return 0;
}
