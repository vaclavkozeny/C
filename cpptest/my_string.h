#pragma once

class my_string {
    char* str;
    int len;
public:
    my_string(char* _str,int _len);
    void write();
    my_string operator+(my_string _string2);
    my_string operator()(int start, int end);
    ~my_string();
};
