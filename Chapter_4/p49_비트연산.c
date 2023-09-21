#include <stdio.h>

int main() {
    // status 변수는 센서값을 읽어온 바이트입니다.
    unsigned char status = 0b00001010; // 예시: 8개의 센서 중 비트 1과 비트 3이 1인 상태

    // 세탁기 문이 열려있는지 검사 (비트 0)
    printf("%d", status & 0x01);
    if (status & 0x01) {
        printf("세탁기 문이 열려있습니다.\n");
    }
    else {
        printf("세탁기 문이 닫혀있습니다.\n");
    }

    // 다른 센서들에 대한 검사도 유사한 방법으로 진행할 수 있습니다.

    return 0;
}
