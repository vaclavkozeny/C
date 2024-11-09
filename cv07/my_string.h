#pragma once
#include <iostream>

class MyString {
public:
    MyString(char* _str, int _len);
    void vypis();
    MyString operator+(MyString &s);
    MyString operator()(int b, int e);
    //MyString(MyString &s);
    int getLen() { return len; }
    ~MyString();
private:
    char* str;
    int len;
};
