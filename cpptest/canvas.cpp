#include "canvas.h"
#include <iostream>

void cell::addshape(shape *_shp) {
    shapes.insert(shapes.end(),_shp);
}

vector<shape *> cell::getshapes() {
    return shapes;
}

vector<cell *> canvas::getcels() {
    return cells;
}

marker::marker(int _c) : color(_c){
    durability = 10;
}

void marker::setdur(int _dec) {
    durability = durability - _dec;
}

ploter::ploter(int _r, int _c):rows(_r),cols(_c) {
}

void ploter::addmarker(marker *_m) {
    markers.insert(markers.end(),_m);
}

void ploter::plot(canvas & _canvas) {
    for (auto s_cell: _canvas.getcels()) {
        for (auto element: s_cell->getshapes()) {
            element->draw();
        }
    }
}

void circle::draw() {
    cout << "kolecko" << endl;
}

void square::draw() {
    cout << "ctverecek" << endl;
}
