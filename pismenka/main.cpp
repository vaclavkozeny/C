#include <iostream>
#include "pismenka.h"
int main() {
    Process_class pc("see you later aligator see you later aligator see you later aligator see you later aligator see you later aligator see you later aligator see you later aligator see you later aligator ");
    pc.add_module(new Modul_A());
    pc.add_module(new Modul_OJ());
    string oj = pc.process_all();
    cout << oj << endl;
}
