#include <stdio.h>
#include <math.h>

int main() {
    double targetHeight = 8800000.0; // 에베레스트산의 높이 (mm)
    double paperThickness = 1.0; // 종이의 두께 (mm)
    int numFolds = 0; // 초기 접힌 횟수

    while (paperThickness < targetHeight) {
        paperThickness *= 2; // 종이 두께 2배 증가
        numFolds++; // 접힌 횟수 증가
    }

    printf("에베레스트산 높이에 도달하기 위해 종이를 %d 번 접어야 합니다.\n", numFolds);

    return 0;
}
