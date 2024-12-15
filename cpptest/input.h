#pragma once
#include <string>
#include <vector>
using namespace std;

class atribute;
class HTMLInput {
    vector<atribute*> atributes;
public:
    void AddAtribute(atribute* _atb);
    string generate();
};
class atribute {
public:
    virtual string write() = 0;
};
class TypeText : public atribute {
public:
    string write() override;
};
class TypePassword : public atribute {
public:
    string write() override;
};
class TypeHidden : public atribute {
public:
    string write() override;
};
