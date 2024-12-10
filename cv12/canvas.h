#pragma once
#include <vector>
#include <stdlib.h>
using namespace std;
class shape;
class cell {
    int maxsize;
    int size;
    vector<shape*> shapes;
public:
    cell(int _maxsize);
    int addShape(shape* _shape);
    vector<shape*> getShapes() const;
};
class canvas {
    int rows;
    int cols;
    vector<vector<cell>> _canvas;
public:
    canvas(int _rows, int _cols);
    void addShape(int _r, int _c, shape* _shape);
    vector<vector<cell>> getShapes() const;
};
class marker {
    int color;
    int durability;
};
class plotter {
    //vector<marker> markers;
    vector<int> marks;
public:
    plotter(vector<int> _markers);
    int rows;
    int cols;
    void plot(canvas _canvas, int _r, int _c);
};
class shape {
    int color;
public:
    virtual void draw() const = 0;
    int getColor();
};
class circle : public shape {
    int color;
public:
    void draw() const override;
    circle(int _color);
};
class line : public shape {
    int color;
public:
    void draw() const override;
};