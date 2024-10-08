#include "file_manager.h"

FILE* open_file(char* file_name, char* mode) {
    return fopen(file_name, mode);
}
void close_file(FILE* file) {
    fclose(file);
}
void write_to_file(FILE* file, char* text) {
    fprintf(file, "%s", text);
}
char* read_from_file(FILE* file, char* buffer) {
    return fgets(buffer, sizeof(buffer), file);
}
