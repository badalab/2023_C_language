#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(){
  int i;
  char dic[WORDS][2][30] = { // 데이터 배치에 따라 3차원 배열의 크기는 달라질 수 있음
    {"book", "책"},
    {"boy", "소년"},
    {"computer", "컴퓨터"},
    {"language", "언어"},
    {"rain", "비"},
  };
  char word[30];

  printf("단어를 입력하시오 : ");
  scanf("%s", word);

  for (i = 0; i < WORDS; i++){
    if(strcmp(dic[i][0], word) == 0) {
      printf("%s : %s\n", word, dic[i][1]);
      return 0;
    }
  }
  printf("사전에서 발견되지 않았습니다.\n");

  return 0;
}
