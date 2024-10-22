#include "pointer_lib.h"

#include <string.h>


char* allocate_memory() {
    return malloc(32);
}
void switch_bytes(char* p) {
    int* start = (int*)p;
    int* end = (int*)(p + 32 - sizeof(int));

    int* temp = start;
    *start = *end;
    *end = *temp;
}
void reverse_bytes(char* p) {
    char* start = p;
    char* end = p + 31;
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
