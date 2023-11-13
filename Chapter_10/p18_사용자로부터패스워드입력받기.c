#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
	int i;
	char password[9]; //8자리 패스워드 + NULL 문자('\0')

	printf("패스워드를 입력하시오: ");
	for (i = 0; i < 8; i++) {
		password[i] = _getch();
		printf("*");
	}
	password[8] = '\0';

	printf("\n입력된 패스워드는 다음과 같습니다: %s\n", password);
}
