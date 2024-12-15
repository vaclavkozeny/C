#include "input.h"


void HTMLInput::AddAtribute(atribute *_atb) {
    atributes.insert(atributes.end(),_atb);
}

string HTMLInput::generate() {
    string ret = "<input";
    for (auto atb: atributes) {
        ret.append(atb->write());
    }
    ret.append(">");
    return ret;
}

string TypeText::write() {
    return " type=\"text\"";
}

string TypePassword::write() {
    return " type=\"password\"";
}

string TypeHidden::write() {
    return " type=\"hidden\"";
}
