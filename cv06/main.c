#include <stdio.h>
#include "sachy.h"

int main(void) {
    char* str = "pesak";
    FIGURE* f = create_figure(1,str);
    print_figure(f);
    printf("\n");
    int rows = 4;
    int cols[] = {4,4,5,4};
    FIGURE*** board = create_board(rows, cols);
    print_board(board, rows, cols);
    put_figure(board, f, 0, 0, rows, cols);
    print_board(board, rows, cols);
    move_figure(board, f, 1, 1, rows, cols);
    print_board(board, rows, cols);
    move_figure(board, f, 10, 1, rows, cols);
    free_board(board, rows);
    free(f);
}
