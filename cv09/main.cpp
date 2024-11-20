#include <iostream>
#include "element.h"
#include "elementlist.h"
int main() {
    //CElement elem(new Password(),new String("Test"));
    //std::cout << elem.get_element() << std::endl;
    ListElement le;
    le.AddProperty(new TypeText());
    le.AddProperty(new TypePassword());
    le.AddProperty(new ValueString("pepa"));
    cout << le.GenerateHTML() << endl;
    return 0;
}
