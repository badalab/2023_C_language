#include <stdio.h>

int main() {
    int totalMoney, itemPrice, change, num100, num10;

    // 투입한 돈, 물건값 입력
    printf("투입한 돈을 입력하세요: ");
    scanf("%d", &totalMoney);

    printf("물건값을 입력하세요: ");
    scanf("%d", &itemPrice);

    change = totalMoney - itemPrice;

    // 100원 동전 개수 계산
    num100 = change / 100;
    change = change % 100;

    // 10원 동전 개수 계산
    num10 = change / 10;

    // 결과 출력
    printf("거스름돈 : %d\n", change);
    printf("반환할 100원 동전 개수: %d개\n", num100);
    printf("반환할 10원 동전 개수: %d개\n", num10);

    return 0;
}
