#include <iostream>
#include "A.h"
#include "dml_class/cm.h"

using namespace std;

int main () {
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;
    cout << "test!!" << endl;

    int j;
    j = 1;

    j++;

    cout << j << endl;

    j += 1;

    if (!j) {}
    else
        cout << j << endl;

    A a;
    a.print();

    if (nullptr != &a)
        cout << "a is not null" << endl;

    return 0;
}
