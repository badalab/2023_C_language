  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main() {
      srand(time(NULL)); // 난수 생성기 시드 설정
      int operand1, operand2, answer, userAnswer;

      do {
          operand1 = rand() % 100; // 0에서 99 사이의 난수 생성
          operand2 = rand() % 100;
          answer = operand1 + operand2;

          printf("%d + %d = ?\n", operand1, operand2);
          scanf("%d", &userAnswer);

          if (userAnswer == answer) {
              printf("정답입니다! 프로그램을 종료합니다.\n");
              break;
          } else {
              printf("틀렸습니다. 다시 시도해보세요.\n");
          }

      } while (1);

      return 0;
  }
