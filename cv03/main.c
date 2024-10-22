#include <stdio.h>

#include "pointer_lib.h"
void vypis(char* p);
void napln(char* p);
int main(void) {
    char* p = allocate_memory();
    napln(p);
    vypis(p);
    reverse_bytes(p);
    printf("\n");
    vypis(p);
    napln(p);
    printf("\n");
    switch_bytes(p);
    vypis(p);
    free(p);
    return 0;
}
void vypis(char* p) {
    for (int i = 0; i < 32; ++i) {
        printf("%d ",p[i]);
    }
}
void napln(char* p) {
    for (int i = 0; i < 32; ++i) {
        p[i] = i;
    }
}

