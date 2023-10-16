#include <stdio.h>

int searchValue(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // 찾은 경우 해당 인덱스를 반환
        }
    }

    return -1; // 찾지 못한 경우 -1을 반환
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;

    printf("찾을 값을 입력하세요: ");
    scanf("%d", &target);

    int result = searchValue(numbers, size, target);

    if (result != -1) {
        printf("%d는 배열의 %d번째에 있습니다.\n", target, result);
    } else {
        printf("%d는 배열에 없습니다.\n", target);
    }

    return 0;
}
