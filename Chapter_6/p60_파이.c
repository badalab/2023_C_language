#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numPoints = 1000000; // 시뮬레이션에 사용할 점의 수
    int pointsInsideCircle = 0;

    srand(time(NULL));

    for (int i = 0; i < numPoints; i++) {
        double x = (double)rand() / RAND_MAX; // 0에서 1 사이의 난수 생성
        double y = (double)rand() / RAND_MAX;

        double distance = x*x + y*y; // 원점에서의 거리의 제곱

        if (distance <= 1) {
            pointsInsideCircle++;
        }
    }

    double piApproximation = 4.0 * ((double)pointsInsideCircle / numPoints);

    printf("π의 근사값: %f\n", piApproximation);

    return 0;
}
