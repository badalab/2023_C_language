#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("이차방정식의 계수를 입력하세요 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 판별식 계산
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // 두 실근이 있는 경우
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("근은 %.2lf, %.2lf입니다.\n", root1, root2);
    } else if (discriminant == 0) {
        // 중근이 있는 경우
        root1 = -b / (2*a);
        printf("중근은 %.2lf입니다.\n", root1);
    } else {
        // 허근인 경우
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("근은 %.2lf + %.2lfi, %.2lf - %.2lfi입니다.\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
