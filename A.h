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

    void print () const {
        std::cout << a << std::endl;
    }
};

A::A(int val) : a(val) {}

#endif //DATA_A_H
