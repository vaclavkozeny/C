#pragma once
#include <string>
class IType;
class IValue;
class CElement {
    IType* type;
    IValue* value;
public:
    std::string get_element() const;
    CElement(IType* _type, IValue* _value);
    std::string Type() const;
    std::string Value() const;
};
//------------------- type --------------------
class IType {
public:
    virtual std::string get_type() const = 0;
};
class Text : public IType {
    std::string get_type() const;
};
class Password : public IType {
    std::string get_type() const;
};
class Hidden : public IType {
    std::string get_type() const;
};
//-------------- value ------------------
class IValue {
public:
    virtual std::string get_value() const = 0;
};
class String : public IValue {
    std::string val;
public:
    std::string get_value() const;
    String(std::string _v);
};
