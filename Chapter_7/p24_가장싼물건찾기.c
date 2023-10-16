#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int prices[] = {50000, 30000, 70000, 40000, 60000};
    int size = sizeof(prices) / sizeof(prices[0]);

    int minPrice = findMin(prices, size);

    printf("가장 저렴한 상품의 가격: %d원\n", minPrice);

    return 0;
}
