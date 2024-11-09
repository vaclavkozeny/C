#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct position {
    int x;
    int y;
}POSITION;

typedef struct figure {
    int color;
    char* name;
    POSITION* move_history;
    //int hist_size;
}FIGURE;

FIGURE* create_figure(int color, char* name);
void print_figure(FIGURE* f);
FIGURE*** create_board(int rows, int* cols);
void print_board(FIGURE*** board, int rows, int* cols);
void free_board(FIGURE*** board, int rows);
void move_figure(FIGURE*** b,FIGURE* f, int x, int y, int rows, int* row_lengths);
void put_figure(FIGURE*** b, FIGURE* f, int x, int y, int rows, int* row_lengths);
int is_move_valid(FIGURE*** board, int rows, int* row_lengths, int x, int y);