//
#include "test.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* get_from_textfile(char* name, int length) {
    FILE* file = fopen(name,"r");
    int* arr = malloc(length*sizeof(int));
    for (int i = 0; i < length; ++i) {
        fscanf(file,"%d;",&arr[i]);
    }
    return arr;
}
void read_from_binary_file(int* vel, char* name, int size) {
     FILE* file = fopen(name,"rb");
     for (int i = 0; i < size; ++i) {
         char* buff = malloc(1);
         fread(&buff, vel[i], 1, file);
         printf("%d",buff);
         free(buff);
     }
}

FILE* open_file(char* name) {
    return fopen(name,"rb");
}
void close_file(FILE* file) {
    fclose(file);
}
void write(FILE* file, char* text) {
    fprintf(file, "%s", text);
}
char* read(FILE* file, char* buff) {
    return fgets(buff,sizeof(buff),file);
}
//TODO dodelat porovnani
// int porovnej(char* file1_name, char* file2_name) {
//     FILE* f1 = open_file(file1_name);
//     FILE* f2 = open_file(file2_name);
//     while(!feof(f1)||!feof(f2)) {
//         if (strcmp(buffer1, buffer2) != 0) {
//             close_file(f1);
//             close_file(f2);
//             return 1;
//         }
//     }
//     close_file(f1);
//     close_file(f2);
//     return 0;
// }

char* allocate_array(int size) {
    return malloc(size*sizeof(char));
}

void fill_array(char *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i;
    }
}

void switch_arr(char *arr, int size) {
    char* pom = malloc(4);
    for (int i = 0; i < 4; ++i) {
        pom[i] = arr[i];
    }
    for (int i = 0; i < 4; ++i) {
        arr[3-i] = arr[size-1-i];
    }
    for (int i = 0; i < 4; ++i) {
        arr[size-1-i] = pom[3-i];
    }
    free(pom);
}

void reverse_array(char *arr, int size) {
    char* pom = malloc(size);
    for (int i = 0; i < size; ++i) {
        pom[i] = arr[i];
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = pom[size-1-i];
    }
    free(pom);
}

long* allocate_long(int size) {
    return malloc(size*sizeof(long));
}
long** mix_array(long* arr, int size) {
    long** pom = malloc(size*sizeof(long*));
    for (int i = 0; i < size; ++i) {
        pom[i] = &arr[i];
    }
    long* b = pom[0];
    pom[0] = pom[size-1];
    pom[size-1] = &b;
    return pom;
}
void fill_array_long(long *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i;
    }
}
void vypis_pole(char* arr, int size) {
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }
}

void vypis_pole_long(long* arr, int size) {
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%ld ",arr[i]);
    }
}
