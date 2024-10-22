#include <stdio.h>
#include "pole.h"

#define SIZE 30

void print_array(long* p, int size);
void fill_array(long* p, int size);
void print_mixed_array(long** p, int size);

int main(void) {
    long* my_arr = allocate_array(SIZE);
    fill_array(my_arr,SIZE);
    print_array(my_arr,SIZE);
    long** mixed_array = mix_array(my_arr,SIZE);
    print_mixed_array(mixed_array,SIZE);
    print_array(my_arr,SIZE);
    free(my_arr);
    free(mixed_array);
    return 0;
}

void print_array(long* p, int size) {
    printf("\noriginal array \n");
    for (int i = 0; i < size; i++) {
        printf("%lu ",p[i]);
    }
}
void fill_array(long* p, int size) {
    for (int i = 0; i < size; ++i) {
        p[i] = i;
    }
}
void print_mixed_array(long** p, int size) {
    printf("\nmixed array \n");
    for (int i = 0; i < size; ++i) {
        printf("%lu ",*p[i]);
    }
}