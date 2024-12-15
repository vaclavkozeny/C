#include "proud.h"

#include <iostream>

DataIN::DataIN(int _id, long _timestamp, vector<double> _values):id(_id),timestamp(_timestamp),values(_values) {}

int DataIN::getid() {
    return id;
}

vector<double> DataIN::getvalues() {
    return values;
}

void process::processData(DataIN &_din) {
    ProcessingMethod* pm = methods.at(_din.getid());
    if (pm == nullptr) {
        methods.insert({0,new ProcessingMethod});
        pm = methods.at(0);
    }
    pm->processData(_din);
}

void process::AddToMap(int _id, ProcessingMethod *_pm) {
    methods.insert({_id,_pm});
}

void ProcessingMethod::processData(DataIN &_din) {
    cout << _din.getid() << endl;
    for (auto d: _din.getvalues()) {
        cout << d;
    }
    cout << endl;
}

void ProcessAVG::processData(DataIN &_din) {
    double a = 0;
    for (auto d: _din.getvalues()) {
        a = a + d;
    }
    cout << a/_din.getvalues().size() << endl;
}








