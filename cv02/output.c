#include "output.h"

#include <string.h>

#include "file_manager.h"
void write_result(int result) {
    if (result == 0) {
        printf("soubory jsou stejne\n");
    } else {
        printf("soubory nejsou stejne\n");
    }
}

void write_to_output_file(char* file, int result, char* file1, char* file2) {
    FILE* output_file = open_file(file, "a");
    char* file1_name = strrchr(file1, '/');
    char* file2_name = strrchr(file2, '/');
    file1_name = file1_name + 1;
    file2_name = file2_name + 1;
    char str[200] = "soubory ";
    strcat(str, file1_name);
    strcat(str, " a ");
    strcat(str, file2_name);
    if (result == 0) {
        strcat(str, " jsou stejne\n");
        write_to_file(output_file, str);
    } else {
        strcat(str, " nejsou stejne\n");
        write_to_file(output_file, str);
    }
    close_file(output_file);
}
