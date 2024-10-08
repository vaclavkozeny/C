#include <stdio.h>
void generate_test_files() {
    //write into binary file
    FILE *binary_file = fopen("C:/Users/kozen/CLionProjects/cviceni01/data.bin", "wb");
    char a = 'a';
    int b = 123;
    double c = 3.14;
    fwrite(&a, sizeof(char), 1, binary_file);
    fwrite(&b, sizeof(int), 1, binary_file);
    fwrite(&c, sizeof(double), 1, binary_file);
    fclose(binary_file);

    FILE *csv_file = fopen("C:/Users/kozen/CLionProjects/cviceni01/data.csv", "w");
    fprintf(csv_file, "%d;%d;%d", sizeof(char), sizeof(int), sizeof(double));
    fclose(csv_file);
}
void read_files() {
    FILE *csv_file = fopen("C:/Users/kozen/CLionProjects/cviceni01/data.csv", "r");
    int lenghts[3];
    fscanf(csv_file, "%d;%d;%d", &lenghts[0], &lenghts[1], &lenghts[2]);
    fclose(csv_file);
    printf("Numbers: %d, %d, %d\n", lenghts[0], lenghts[1], lenghts[2]);
    FILE *binary_file = fopen("C:/Users/kozen/CLionProjects/cviceni01/data.bin", "rb");
    double binary_double;
    int binary_int;
    char binary_char;
    fread(&binary_char, lenghts[0],1,binary_file);
    fread(&binary_int, lenghts[1],1,binary_file);
    fread(&binary_double, lenghts[2],1,binary_file);

    fclose(binary_file);
    printf("Binary values: %c, %d, %f\n", binary_char, binary_int, binary_double);
}
int main(void) {
    generate_test_files();
    read_files();
    return 0;
}

