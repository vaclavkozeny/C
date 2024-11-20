#include "gpt.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void velkaPismena(char *file_in) {
    FILE* file = fopen(file_in,"r");
    FILE* file_out = fopen("C:/Users/kozen/CLionProjects/cviceni/test/out.txt","w");
    char p;
    while(!feof(file)) {
        fscanf(file,"%c",&p);
        if (feof(file)) {
            break;
        }
        fprintf(file_out,"%c",toupper(p));
    }
    fclose(file_out);
    fclose(file);
}
void generateBinaryFile(char* name,int size) {
    FILE* f = fopen(name,"w");
    for (int i = 0; i < size; ++i) {
        fwrite(&i,sizeof(int),1,f);
    }
    fclose(f);
}
int* getFromBinary(char* name, int size) {
    FILE* f = fopen(name,"r");
    int* arr = malloc(size*sizeof(int));
    int buff;
    for (int i = 0; i < size; ++i) {
        fread(&buff,sizeof(int),1,f);
        arr[i] = buff;
    }
    fclose(f);
    return arr;
}
void switchint(int* a, int* b) {
    int p = *a;
    *a = *b;
    *b = p;
}

int * allocate(int n) {
    int* arr = malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    return arr;
}
int** matrix(int rows, int cols) {
    int** arr = malloc(rows*sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        arr[i] = malloc(cols*sizeof(int));
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = j*10+i*10;
        }
    }
    return arr;
}

STUDENT* create(char *name, int vek, float prumer) {
    STUDENT* s = malloc(sizeof(struct Student));
    s->name = name;
    s->vek = vek;
    s->prumer = prumer;
    return s;
}

void toString(STUDENT* s) {
    printf("name %s, age %d, average %f",s->name,s->vek,s->prumer);
}

