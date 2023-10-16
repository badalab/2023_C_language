#include <stdio.h>

int main() {
    int math, physics, chemistry;

    printf("수학 물리 화학 점수를 입력하세요: ");
    scanf("%d %d %d", &math, &physics, &chemistry);


    if (math >= 50 && physics >= 50 && chemistry >= 50) {
        if ((math + physics >= 150) || (math + chemistry >= 150)) {
            printf("가입할 수 있습니다.\n");
        } else {
            printf("(물리+수학) 또는 (수학+화학) 합이 150 이상이어야 합니다.\n");
        }
    } else {
        printf("수학, 물리, 화학 점수가 모두 50점 이상이어야 합니다.\n");
    }

    return 0;
}
