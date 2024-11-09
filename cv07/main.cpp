#include "my_string.h"

int main() {
    char* str = "Ahoj";
    MyString m = MyString(str, 4);
    m.vypis();
    MyString cut = m(1,3);
    cut.vypis();
    MyString m2 = m+cut;
    m2.vypis();
    delete(str);
    return 0;
}
