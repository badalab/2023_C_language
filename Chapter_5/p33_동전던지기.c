#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // 난수 생성을 위한 시드 설정

    int result = rand() % 2; // 0 또는 1 중에서 랜덤하게 선택

    printf("동전 던지기 게임을 시작합니다.\n");
  
    if (result == 0) {
        printf("앞면입니다.\n");
    } else {
        printf("뒷면입니다.\n");
    }

    return 0;
}
