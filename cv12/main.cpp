#include <iostream>
#include "canvas.h"
int main() {
    canvas c(10,10);
    c.addShape(1,1,new circle(1));
    plotter p({1,2,3,4});
    p.plot(c,10,10);
    return 0;
}
