#include "my_string.h"

#include <iostream>
#include <stdlib.h>
using namespace std;

my_string::my_string(char *_str, int _len):len(_len) {
    str = (char*)malloc(len*sizeof(char));
    for (int i = 0; i <= len; ++i) {
        str[i] = _str[i];
    }
}

void my_string::write() {
    for (int i = 0; i <= len; ++i) {
        cout << str[i];
    }
    cout << endl;
}

my_string my_string::operator+(my_string _string2) {
    int newlen = len + _string2.len;
    char* newstr = (char*)malloc(newlen*sizeof(char));
    for (int i = 0; i <= len; ++i) {
        newstr[i] = str[i];
    }
    for (int i = 0; i <= _string2.len; ++i) {
        newstr[len+i] = _string2.str[i];
    }
    return my_string(newstr,newlen);
}

my_string my_string::operator()(int start, int end) {
    char* newstr = (char*)malloc((end-start)*sizeof(char));
    for (int i = 0; i <= (end-start); ++i) {
        newstr[i] = str[start+i];
    }
    return my_string(newstr,end-start);
}

my_string::~my_string() {
    free(str);
}
