#pragma once
typedef struct Student {
    char* name;
    int vek;
    float prumer;
}STUDENT;
void velkaPismena(char* file_in);
void generateBinaryFile(char* name,int size);
int* getFromBinary(char* name, int size);
void switchint(int* a, int* b);
int* allocate(int n);
int** matrix(int rows, int cols);
STUDENT* create(char* name,int vek, float prumer);
void toString(STUDENT* s);


