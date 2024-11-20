#include "sachy.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FIGURE *** allocate_board(int row, int* cols) {
    FIGURE*** board = malloc(row*sizeof(FIGURE**));
    for (int i = 0; i < row; ++i) {
        board[i] = (FIGURE**)malloc(cols[i] * sizeof(FIGURE*));
        for (int j = 0; j < cols[i]; j++) {
            board[i][j] = NULL;
        }
    }
    return board;
}

FIGURE * create_figure(int color, char *name) {
    FIGURE* f = malloc(sizeof(struct figure));
    f->color = color;
    f->name = strdup(name);
    f->move_history_length = 0;
    f->move_history = malloc(sizeof(POSITION));
    return f;
}

void print_board(FIGURE ***board, int rows, int *cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols[i]; ++j) {
            if(board[i][j] == NULL){
                printf(" - ");
            }else {
                printf(board[i][j]->name);
            }
        }
        printf("\n");
    }
}

int put_figure(FIGURE *figure, int x, int y, int rows, int *cols, FIGURE*** board) {
    if(x>rows || x < 0) {
        return 1;//out of range
    }else if(y>cols[x] || y < 0) {
        return 1;//out of range
    }else {
        figure->move_history = realloc(figure->move_history, (sizeof(POSITION) * (figure->move_history_length + 1)));
        board[x][y] = figure;
        figure->move_history[figure->move_history_length].x = x;
        figure->move_history[figure->move_history_length].y = y;
        figure->move_history_length++;
        return 0;
    }
}

