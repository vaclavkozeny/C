#include <iostream>
#include "mereni.h"
int main() {
    processor p;
    p.add_method(new modul_prumer);
    dataclass d(0,12345,{1,2,3,4,5,6});
    p.process(d);
    return 0;
}
