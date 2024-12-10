#include "mereni.h"


dataclass::dataclass(int _id, long _timestamp, list<double> _d): id(_id), timestamp(_timestamp), d_list(_d) {}

int dataclass::get_id() const{
    return id;
}

list<double> dataclass::get_data() const {
    return d_list;
}

void processor::process(dataclass d) const {
    if(moduls.find(d.get_id())==moduls.end()) {
        moduls.find(d.get_id())->second->zpracuj(d);
    }
    // if(!moduls[d.get_id()]) moduls[d.get_id()]->process(d);
    // else {
    //     moduls[d.get_id()] = new avg_method();
    //     moduls[d.get_id()]->process(d);
    // }
}

void processor::add_method(modul* method) {
    int s = moduls.size();
    moduls[s] = method;
}

void modul::zpracuj(const dataclass &d) const {
    cout << d.get_id() << " ";
    for(double p : d.get_data()) {
        cout << p << " ";
    }
    cout << endl;
}

void modul_prumer::zpracuj(const dataclass &d) const {
    cout << "prumer" << endl;
}

