#include <stdio.h>
#define MY_FILE1 "C:/Users/kozen/CLionProjects/cviceni/cv02/file1.txt"
#define MY_FILE2 "C:/Users/kozen/CLionProjects/cviceni/cv02/file2.txt"
#define OUTPUT_FILE "C:/Users/kozen/CLionProjects/cviceni/cv02/output.txt"
#include "file_manager.h"
#include "processing.h"
#include "output.h"
void generate_files();
int main(void) {
    generate_files();
    int result = is_same_file(MY_FILE1, MY_FILE2);
    write_result(result);
    write_to_output_file(OUTPUT_FILE, result, MY_FILE1, MY_FILE2);
    return 0;
}
void generate_files() {
    FILE* file1 = open_file(MY_FILE1, "w");
    write_to_file(file1, "Hello, World!");
    close_file(file1);
    FILE* file2 = open_file(MY_FILE2, "w");
    write_to_file(file2, "Hello, World!");
    close_file(file2);
}
