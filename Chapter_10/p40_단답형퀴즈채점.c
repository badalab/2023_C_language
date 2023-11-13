#include <stdio.h>
#include <string.h>

int main() {
	char answer[] = "C";
	char input[100]="";

	while (strcmp(answer, input) != 0) {
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		scanf("%s", input);
	}
  printf("맞았습니다!\n");
	return 0;
}
