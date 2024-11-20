#pragma once
#include <stdio.h>
#include <stdlib.h>


int* get_from_textfile(char* name, int length);

void  read_from_binary_file(int* vel, char* name, int size);

void vypis_pole(char* arr, int size);

FILE* open_file(char* name);
void close_file(FILE* file);
void write(FILE* file, char* text);
char* read(FILE* file, char* buffer);
int porovnej(char* file1_name, char* file2_name);
char* allocate_array(int size);
void fill_array(char* arr, int size);
void switch_arr(char* arr, int size);
void reverse_array(char* arr, int size);
long* allocate_long(int size);
long** mix_array(long* arr,int size);
void fill_array_long(long *arr, int size);
void vypis_pole_long(long* arr, int size);