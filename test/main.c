#include "test.h"
#include "sachy.h"
#include "gpt.h"
#define file_in "C:/Users/kozen/CLionProjects/cviceni/test/file.txt"
#define binfile "C:/Users/kozen/CLionProjects/cviceni/test/bin.bin"
int main(void) {
    //generate_test_files();
    // char* name = "C:/Users/kozen/CLionProjects/cviceni/test/a.csv";
    // int* ar = get_from_textfile(name,7);
    // vypis_pole(ar,3);
    // read_from_binary_file(ar,"C:/Users/kozen/CLionProjects/cviceni/test/data.bin",3);
    // free(ar);

    // char* arr = allocate_array(32);
    // fill_array(arr,32);
    // vypis_pole(arr,32);
    // reverse_array(arr,32);
    // vypis_pole(arr,32);
    // free(arr);
    // long* al = allocate_long(32);
    // fill_array_long(al,32);
    // vypis_pole_long(al,32);
    // int rows = 5;
    // int cols[] ={5,5,5,5,4};
    // FIGURE* fig = create_figure(1,"pesak");
    // FIGURE*** board = allocate_board(rows,cols);
    // print_board(board, rows, cols);
    // put_figure(fig,0,0,rows,cols,board);
    // print_board(board, rows, cols);
    // generateBinaryFile(binfile,10);
    // int* arr = getFromBinary(binfile,10);
    // for (int i = 0; i < 10; ++i) {
    //     printf("%d ",arr[i]);
    // }
    // // free(arr);
    // int a = 10;
    // int b = 5;
    // switchint(&a,&b);
    // printf("a %d, b %d",a,b);
    // int* arr = allocate(100);
    // for (int i = 0; i < 100; ++i) {
    //     printf("%d ",arr[i]);
    // }
    // free(arr);
    // int** mat = matrix(5,5);
    // for (int i = 0; i < 5; ++i) {
    //     for (int j = 0; j < 5; ++j) {
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    // free(mat);
    STUDENT * s = create("Pepa",15,2.5);
    toString(s);
    return 0;
}

