#include <stdio.h>

#define TRUE 1
#define FALSE 1

typedef int bool;

void print_char_arr(char *arr, int row, int col);

int main() {
    char checker_board[8][8];
    char r = 'R';
    char b = 'B';
    char curr = b;
    for (int i = 0; i < 8; i++) {
        curr = (i % 2 == 0) ? b : r;
        for (int j = 0; j < 8; j++) {
            checker_board[i][j] = curr;
            curr = curr == b ? r : b;
        }
    }

    print_char_arr(checker_board, 8, 8);
}

void print_char_arr(char *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c ", arr[i * row + j]);
        }
        printf("\n");
    }
}
