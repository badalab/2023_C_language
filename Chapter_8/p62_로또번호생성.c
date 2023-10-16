#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lottoNumbers[6];
    int i, j, temp;
    srand(time(NULL));

    // 1부터 45까지의 숫자 배열 초기화
    for(i = 0; i < 45; i++) {
        lottoNumbers[i] = i + 1;
    }

    // 배열을 섞기
    for(i = 0; i < 45; i++) {
        j = rand() % 45;
        temp = lottoNumbers[i];
        lottoNumbers[i] = lottoNumbers[j];
        lottoNumbers[j] = temp;
    }

    // 처음 6개 원소 출력
    printf("로또 번호: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", lottoNumbers[i]);
    }

    return 0;
}
