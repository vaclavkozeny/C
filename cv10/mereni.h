#pragma once
#include <list>
#include <iostream>
#include <map>
using namespace std;
class modul;
class dataclass {
    int id;
    long timestamp;
    list<double> d_list;
public:
    dataclass(int _id, long _timestamp, list<double> _d);
    int get_id() const;
    list<double> get_data() const;
};
class processor {
    map<int, modul*> moduls;
public:
    void process(const dataclass d) const;
    void add_method(modul* method);
};
class modul {
public:
    void zpracuj(const dataclass& d) const;
};
class modul_prumer : public modul{
public:
    void zpracuj(const dataclass& d) const;
};






