#include <stdio.h>

#define TRUE 1
#define FALSE 1

#define ROW 5
#define COL 5

typedef int bool;

void print_array_first_element_in_row(int (*arr)[COL], int row);
void print_int_arr(int *arr, int row, int col);
void print_separator();

int main() {
    int board[5][5];
    int curr = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = curr++;
        }
    }

//    print out
//    0 1 2 3 4
//    5 6 7 8 9
//    10 11 12 13 14
//    15 16 17 18 19
//    20 21 22 23 24
    printf("=================print_int_arr===============\n");
    print_int_arr(board, ROW, COL);
    print_separator();

    // Is this suggested?
//    printf("%d\n", *(board[3]));
//    printf("\n");
//    print_int_arr_single_pointer(board[0], 5, 5);


    printf("=================print_array_first_element_in_row===============\n");
    print_array_first_element_in_row(board, ROW); // print out 0 5 10 15 20
    print_separator();

    //
    printf("=================print array from main===============\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
//            printf("%d ", board[i * ROW + j]); // This doesn't work within the main but works outside - array is not decayed, need to have 2 brackets to access
            printf("%d ", board[i][j]); // This works in the main, but doesn't work outside - array decayed. It can't recognize it

        }
        printf("\n");
    }
    print_separator();

//    for (int i = 0; i < 5; i++) {
//        printf("%d ", *(board[i]));
//    }
//    print_array_first_element_in_row(board, 5, 5);
}

void print_int_arr(int *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i * row + j]);
        }
        printf("\n");
    }
}

// Notice the first param is int (*arr)[COL] due to array decay. https://stackoverflow.com/a/51486043/7061266
// C declaration is different from java. Think int (*arr)[COL] as int* [COL], just like we declare array using
// int arr[] rather than int[] arr like in java.
void print_array_first_element_in_row(int (*arr)[COL], int row) {
    for (int i = 0; i < row; i++) {
        printf("%d ", *(arr[i]));
    }

    printf("\n");
}

void print_separator() {
    printf("=======================");
    printf("\n\n");
}
