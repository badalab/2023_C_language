#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SOL "apple"

void main(){
  char s[100] = SOL;
  char answer[100];
  int i, len;
  len = strlen(s);

  srand(time(NULL));
  
  for(i = 0; i < len; i++){
    int pos1 = rand() % len;
    int pos2 = rand() % len;
    char tmp = s[pos1];
    s[pos1] = s[pos2];
    s[pos2] = tmp;
  }

  do {
    printf("%s의 원래 단어를 맞춰보세요 : ",s);
    scanf("%s", answer);
  } while(strcmp(answer, SOL) != 0);

  printf("축하합니다.\n");
}
