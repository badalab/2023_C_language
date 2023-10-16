#include <stdio.h>

int balance = 1000000; // 초기 잔고 1,000,000원으로 설정

void checkBalance() {
    printf("현재 잔고: %d원\n", balance);
}

void deposit() {
    int amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    balance += amount;
    printf("입금 완료. 새로운 잔고: %d원\n", balance);
}

void withdraw() {
    int amount;
    printf("인출할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount <= balance) {
        balance -= amount;
        printf("인출 완료. 새로운 잔고: %d원\n", balance);
    } else {
        printf("잔고가 부족합니다.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. 잔고 확인\n2. 입금\n3. 인출\n4. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}
