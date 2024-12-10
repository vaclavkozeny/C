#include "canvas.h"

#include <cstdio>


cell::cell(int _maxsize): maxsize(_maxsize) {
    size = 0;
}

int cell::addShape(shape* _shape) {
    if(size < maxsize) {
        size++;
        shapes.push_back(_shape);
        return 0;
    }
    return 1;
}

vector<shape *> cell::getShapes() const {
    return shapes;
}


canvas::canvas(int _rows, int _cols):rows(_rows),cols(_cols), _canvas(_rows, std::vector<cell>(_cols, cell(5))) {
}

void canvas::addShape(int _r, int _c, shape *_shape) {
    _canvas[_r][_c].addShape(_shape);
}

vector<vector<cell>> canvas::getShapes() const {
    return _canvas;
}

plotter::plotter(vector<int> _markers):marks(_markers) {}

void plotter::plot(canvas _canvas, int _r, int _c) {
    vector<vector<cell>> c = _canvas.getShapes();
    for (int i = 0; i < _r; ++i) {
        for (int j = 0; j < _c; ++j) {
            vector<shape*> s = c[i][j].getShapes();
            for (int k = 0; k < 5; ++k) {
                if(s[k] != NULL) s[k]->draw();
            }
        }
    }
}


void circle::draw() const {
    printf("jsem kolečko\n");
}

circle::circle(int _color):color(_color) {
}

void line::draw() const {
    printf("jsem linka\n");
}

