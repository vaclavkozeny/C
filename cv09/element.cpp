#include "element.h"

#include <format>
#include <iostream>
CElement::CElement(IType *_type, IValue* _value) : type(_type),value(_value) {}
std::string CElement::Type() const {
    return type->get_type();
}

std::string CElement::Value() const {
    return value->get_value();
}

std::string CElement::get_element() const {
    return std::format("<input {} {}>", Type(),Value());
}



std::string Text::get_type() const {
    return "type=\"text\"";
}
std::string Password::get_type() const {
    return "type=\"password\"";
}
std::string Hidden::get_type() const {
    return "type=\"hidden\"";
}

std::string String::get_value() const {
    return std::format("value=\"{}\"",val);
}

String::String(std::string _v) : val(_v){}





