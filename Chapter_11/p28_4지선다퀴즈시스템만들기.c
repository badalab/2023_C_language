#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct QUESTION {
  char question[SIZE];
  char item1[SIZE];
  char item2[SIZE];
  char item3[SIZE];
  char item4[SIZE];
  int solution;
};

struct QUESION bank[100] = {
  {"임베디드 장치에 가장 적합한 프로그래밍 언어는?","1.Python","2.Java","3.C","4.Javascript",3},
  {"서로 다른 자료형을 모을 수 있는 구조는?","1.배열","2.변수","3.구조체","4.포인터",3},
};

void main(){
  int select, i;
  for (i = 0; i < 2; i++){
    printf("%s\n", bank[i].question);
    printf*"%s  ", bank[i].item1);
    printf*"%s  ", bank[i].item2);
    printf*"%s  ", bank[i].item3);
    printf*"%s  ", bank[i].item4);
    scanf("%d", &select);
    if (select == bank[i].solution)
      printf("맞았습니다.\n\n");
    else
      printf("틀렸습니다.\n\n");
  }
}
