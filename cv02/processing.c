#include "processing.h"


int is_same_file(char* file1p, char* file2p) {
    FILE* file1 = open_file(file1p, "r");
    FILE* file2 = open_file(file2p, "r");
    while(!feof(file1) || !feof(file2)) {
        char buffer1[100];
        char buffer2[100];
        read_from_file(file1, buffer1);
        read_from_file(file2, buffer2);
        if (strcmp(buffer1, buffer2) != 0) {
            close_file(file1);
            close_file(file2);
            return 1;
        }
    }
    close_file(file1);
    close_file(file2);
    return 0;
}
