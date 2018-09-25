//
// Created by 조건형 on 25/09/2018.
//

#ifndef DATA_A_H
#define DATA_A_H

#include <iostream>

class A {
    int a;
public:
    A (): a(0) {}

    explicit A (int val);

    void print () const;
};

A::A(int val) : a(val) {}

void A::print() const {
    std::cout << a << std::endl;
}

#endif //DATA_A_H
