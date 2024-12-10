#include "pismenka.h"

string Process_class::process_all() {
    if(!moduls.empty()) {
        for (Modul* m: moduls) {
            text = m->process(text);
        }
        return text;
    }
}

Process_class::Process_class(string _in):text(_in) {
    if(text.length() > 100) {
        text = text.substr(0,100);
    }
}

void Process_class::add_module(Modul *_modul) {
    moduls.insert(moduls.end(),_modul);
}
string Modul_A::process(string & _in) {
    string h;
    for (auto const s: _in) {
        if(s == 'a') {
            h.append("ahoj");
        }else {
            h+=s;
        }
    }
    return h;
}
string Modul_OJ::process(string & _in) {
    string h;
    for (int i = 0; i < _in.length()-1; ++i) {
        if(_in[i] == 'o' && i < _in.size()-1 && _in[i+1] == 'j') {
            h.append("o");
            i++;
        }else {
            h += _in[i];
        }
    }
    return h;
}


