#pragma once
#include <vector>
using namespace std;
class shape;
class cell {
    vector<shape*> shapes;
public:
    void addshape(shape* _shp);
    vector<shape*> getshapes();
};
class canvas {
    vector<cell*> cells;
public:
    void addcell(cell* _c) {
        cells.insert(cells.end(),_c);
    }
    vector<cell*> getcels();
};
class marker {
    int color;
    int durability;
public:
    marker(int _c);
    void setdur(int _dec);
};
class ploter {
    int rows;
    int cols;
    vector<marker*> markers;
public:
    ploter(int _r, int _c);
    void addmarker(marker* _m);
    void plot(canvas & _canvas);
};
class shape {
public:
    virtual void draw() = 0;
};
class circle : public shape {
public:
    void draw() override;
};
class square : public shape {
public:
    void draw() override;
};