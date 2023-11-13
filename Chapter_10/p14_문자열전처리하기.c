#include <stdio.h>
#define SIZE 100

void main() {
	char input[SIZE]="";
	char cleaned[SIZE]="";

	printf("문자열을 입력하시오: ");
	gets_s(input, sizeof(input);

  int j = 0;
	for (int i = 0; input[i] != '\0'; i++) { //문자열의 마지막 부분인 NULL문자 전까지만 확인
		if (97 <= input[i] && 122 >= input[i]) { // 아스키코드 소문자 a~z 확인, 대문자 A~Z : 65~90
			cleaned[j] = input[i];
			j++;
		}
	}
	cleaned[j] = '\0';

	printf("출력 문자열: %s\n", cleaned);
}
