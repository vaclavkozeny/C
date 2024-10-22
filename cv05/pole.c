#include "pole.h"


long* allocate_array(int n) {
    return malloc(n * sizeof(long));
}

long** mix_array(long* p, int size) {
    long** inner_array = malloc(size * sizeof(long*));
    for (int i = 0; i < size; ++i) {
        inner_array[i] = &p[i];
    }
    //reverse array
    for (int i = 0; i < size / 2; ++i) {
        long* temp = inner_array[i];
        inner_array[i] = inner_array[size - 1 - i];
        inner_array[size - 1 - i] = temp;
    }
    return inner_array;
}


