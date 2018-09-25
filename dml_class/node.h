//
// Created by 조건형 on 25/09/2018.
//

#ifndef DATA_DML_CM_H
#define DATA_DML_CM_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::vector;
using std::string;

class Node {
public:
    explicit Node (string name);
    virtual void logging () const;

private:
    string _name;
};

inline
void Node::logging() const {
    std::cout << _name << std::endl;
}

inline
Node::Node(string name) : _name(std::move(name)) {}

#endif //DATA_DML_CM_H