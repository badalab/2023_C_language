#include <stdio.h>
#include <conio.h>
#define SIZE 10

int main() {
	int i, j;
	char game[SIZE][SIZE+1] = { //[10],[10]으로 선언 후 안에 '#','#', ... 식으로 작성해도 무방
		"####......",
		"@....#....",
		"###.#.....",
		"..#..#....",
		"..#..#....",
		"..#..#....",
		"...#..##..",
		"....#...##",
		".....#....",
		".....#####"
	};
	int curr_x = 0, curr_y = 1, pos_x = 0, pos_y = 1, end_x = 9, end_y = 8; // 사용자 이동 시 벽에 닿으면 실패이기 때문에 조건 확인용 위치 저장 변수 선언

	do {
    system('cls')
		printf("왼쪽 이동 : <-, 오른쪽 이동 : ->, 위쪽 이동 : ^, 아래쪽 이동 : v\n");
		for (i = 0; i < SIZE; i++) {
			printf("%s", game[i]);
			printf("\n");
		}
		int ch = _getch();
		if (ch == 224) {
			int ch2 = _getch();
			if (ch2 == 75) pos_x--;
			else if (ch2 == 80) pos_y++;
			else if (ch2 == 72) pos_y--;
			else if (ch2 == 77) pos_x++;

			if (game[pos_y][pos_x] != '#') {
				game[pos_y][pos_x] = '@';
				game[curr_y][curr_x] = '.';
				curr_x = pos_x;
				curr_y = pos_y;
			}
			else {
				printf("벽에 충돌 !");
				return 0;
			}
		}
	} while (curr_x != end_x || curr_y != end_y);

	for (i = 0; i < SIZE; i++) {
		printf("%s", game[i]);
		printf("\n");
	}

	printf("탈출 성공");
	return 0;
}
