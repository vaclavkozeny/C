#include "sachy.h"

FIGURE* create_figure(int color, char* name) {
    FIGURE* new_f = malloc(sizeof(struct figure));
    new_f -> color = color;
    new_f -> name = strdup(name);
    return new_f;
}
void print_figure(FIGURE* f) {
    printf("name: %s, color: %d, address: %p,", f->name, f->color, f);
}
FIGURE*** create_board(int rows, int* cols) {
    FIGURE*** board = malloc(rows * sizeof(FIGURE**));
    for (int i = 0; i < rows; i++) {
        board[i] = (FIGURE**)malloc(cols[i] * sizeof(FIGURE*));
        for (int j = 0; j < cols[i]; j++) {
            board[i][j] = NULL;
        }
    }
    return board;
}
void print_board(FIGURE*** board, int rows, int* cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            if(board[i][j] == NULL) {
                printf("%5d ",0);
            } else {
                printf("%s ",board[i][j]->name);
            }
        }
        printf("\n");
    }
    printf("--------------------\n");
}
void put_figure(FIGURE*** b, FIGURE* f, int x, int y, int rows, int* row_lengths) {
    if(is_move_valid(b,rows,row_lengths,x,y)) {
        b[x][y] = f;
        f -> move_history = malloc(sizeof(POSITION));
        f -> move_history -> x = x;
        f -> move_history -> y = y;
        printf("%s was put on %d,%d\n--------------------\n",f->name,x,y);
    }else {
        printf("%s can't be put on %d,%d\n--------------------\n",f->name,x,y);
    }
}
void move_figure(FIGURE*** b,FIGURE* f, int x, int y, int rows, int* row_lengths) {
    b[f->move_history->x][f->move_history->y] = NULL;
    put_figure(b,f,x,y,rows,row_lengths);
}
void free_board(FIGURE*** board, int rows) {
    for (int i = 0; i < rows; i++) {
        free(board[i]);
    }
    free(board);
}
int is_move_valid(FIGURE*** board, int rows, int* row_lengths, int x, int y) {
    return (x >= 0 && x < rows && y >= 0 && y < row_lengths[x]);
}