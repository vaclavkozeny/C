#pragma once

typedef struct position {
    int x;
    int y;
}POSITION;
typedef struct figure {
    int color;
    char* name;
    POSITION* move_history;
    int move_history_length;
}FIGURE;

FIGURE*** allocate_board(int row, int* cols);
FIGURE* create_figure(int color, char* name);
void print_board(FIGURE*** board, int rows, int* cols);
int put_figure(FIGURE* figure, int x, int y, int rows, int* cols,  FIGURE*** board);