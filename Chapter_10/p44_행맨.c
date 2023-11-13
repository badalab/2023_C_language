#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n문자열을 입력하시오 : %s\n", answer);
		printf("글자를 추측하시오 : ");
		ch = _getch();
		
		// 1. 사용자가 입력한 문자를 answer에 넣는 코드 작성
		for (i = 0; i < strlen(solution); i++) {
			if (solution[i] == ch) answer[i] = ch;
		}

		// 2. answer와 solution이 같으면 종료
		if (strcmp(solution, answer) == 0) break;
	}
	return 0;
}
