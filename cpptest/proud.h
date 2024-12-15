#pragma once
#include <vector>
#include <map>
using namespace std;

class DataIN {
    int id;
    long timestamp;
    vector<double> values;
public:
    DataIN(int _id, long _timestamp, vector<double> _values);
    int getid();
    vector<double> getvalues();
};

class ProcessingMethod;
class process {
    map<int,ProcessingMethod*> methods;
public:
    void processData(DataIN & _din);
    void AddToMap(int _id, ProcessingMethod* _pm);
};
class ProcessingMethod {
public:
    virtual void processData(DataIN & _din);
};
class ProcessAVG : public ProcessingMethod {
public:
    void processData(DataIN & _din) override;
};

