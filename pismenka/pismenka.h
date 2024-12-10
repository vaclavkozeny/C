#pragma once
#include <string>
#include <vector>
using namespace std;
class Modul;
class Process_class {
    string text;
    vector<Modul*> moduls;
public:
    string process_all();
    Process_class(string _in);
    void add_module(Modul* _modul);
};
class Modul {
public:
    virtual string process(string & _in) = 0;
};
class Modul_A : public Modul {
public:
    string process(string & _in) override;
};
class Modul_OJ : public Modul {
    string process(string & _in) override;
};