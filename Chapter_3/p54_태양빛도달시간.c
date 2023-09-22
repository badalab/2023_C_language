#include <stdio.h>

int main(void)
{
    float velocity_per_sec = 300000; // 빛의 초속
    double distance = 149600000; // 태양과 지구 사이의 거리
    
    float time = distance / velocity_per_sec / 60; // 시간 = 거리 / 속도 -> 60으로 한 번 더 나누어 분으로 계산
    
    printf("빛의 속도는 %fkm/s\n",velocity_per_sec);
    printf("태양과 지구와의 거리 %lfkm\n",distance); // double 자료형이라 %lf 사용
    printf("도달 시간은 %f분\n",time);
    
    return(0);
}
