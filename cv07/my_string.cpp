#include "my_string.h"

MyString::MyString(char *_str, int _len) {
    len = _len;
    str = new char[len];
    for (int i = 0; i < len; ++i) {
        str[i] = _str[i];
    }
}
void MyString::vypis() {
    for (int i = 0; i < len; ++i) {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

MyString MyString::operator+(MyString &s) {
    char *p = new char[len + s.len+1];
    for (int i = 0; i < len; ++i) {
        p[i] = str[i];
    }
    for (int i = 0; i < s.len; ++i) {
        p[len+i] = s.str[i];
    }
    return MyString(p, len + s.len);
}

MyString MyString::operator()(int b, int e) {
    char* p = new char[e-b+1];
    for (int i = 0; i < e-b; ++i) {
        p[i] = str[b+i];
    }
    p[e-b] = '\0';
    return MyString(p, e-b+1);
}
MyString::~MyString() {
    delete[](str);
}


