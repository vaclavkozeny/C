#pragma once
#include <list>
#include <string>
#include <format>
using namespace std;
class IProperty;

class ListElement {
    list<IProperty*> props;
public:
    void AddProperty(IProperty* prop);
    string GenerateHTML();
};
class IProperty {
public:
    virtual string get_prop() const = 0;
};
class TypeText : public IProperty {
    string get_prop() const;
};
class TypePassword : public IProperty {
    string get_prop() const;
};
class ValueString : public IProperty {
    string value;
public:
    ValueString(string _val);
    string get_prop() const;
};

