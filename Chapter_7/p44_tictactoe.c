#include <stdio.h>

char board[3][3]; // 3x3 보드

void initializeBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    printf("  0 1 2\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", i);
        for(int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
    }
}

int checkWin() {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1; // 가로로 같은 글자가 있는 경우
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1; // 세로로 같은 글자가 있는 경우
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1; // 대각선으로 같은 글자가 있는 경우
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1; // 대각선으로 같은 글자가 있는 경우

    return 0;
}

int isBoardFull() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

int main() {
    int currentPlayer = 1; // 1번 플레이어는 'X', 2번 플레이어는 'O'
    int row, col;
    int gameOver = 0;

    initializeBoard();

    while (!gameOver) {
        displayBoard();

        // 현재 플레이어가 어디에 놓을지 입력 받음
        printf("플레이어 %d, 좌표 (행 열): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // 보드에 놓기 시도
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("잘못된 좌표입니다. 다시 입력해주세요.\n");
            continue;
        }

        if (currentPlayer == 1) {
            board[row][col] = 'X';
            currentPlayer = 2;
        } else {
            board[row][col] = 'O';
            currentPlayer = 1;
        }

        if (checkWin()) {
            displayBoard();
            printf("플레이어 %d가 이겼습니다!\n", currentPlayer == 1 ? 2 : 1);
            gameOver = 1;
        } else if (isBoardFull()) {
            displayBoard();
            printf("무승부입니다!\n");
            gameOver = 1;
        }
    }

    return 0;
}
