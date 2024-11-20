#include "elementlist.h"



void ListElement::AddProperty(IProperty *prop) {
   props.insert(props.end(), prop);
}

string ListElement::GenerateHTML() {
    list<string> strs;
    string ret = "<input ";
    for (auto p: props) {
        strs.insert(strs.end(),p->get_prop());
    }
    for (auto str: strs) {
        ret.append(str);
    }
    ret.append(">");
    return ret;
}

string TypeText::get_prop() const {
    return "type=\"Text\" ";
}

string TypePassword::get_prop() const {
    return "type=\"Password\" ";
}

ValueString::ValueString(string _val):value(_val) {}

string ValueString::get_prop() const {
    return format("value=\"{}\"",value);
}
