#pragma once
#include <stdio.h>

#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#endif //FILE_MANAGER_H

FILE* open_file(char* file_name, char* mode);
void close_file(FILE* file);
void write_to_file(FILE* file, char* text);
char* read_from_file(FILE* file, char* buffer);
