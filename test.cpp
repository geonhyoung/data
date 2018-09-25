#include <iostream>
#include "A.h"

using namespace std;

int main () {
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;

    int j;
    j = 1;

    cout << j << endl;

    j += 1;

    if (!j) {} else cout << j << endl;

    A a;
    a.print();

    return 0;
}
