//
// Created by 조건형 on 25/09/2018.
//

#ifndef DATA_CM_H
#define DATA_CM_H

#include "node.h"

class insert_cm : public Node {
public:
    void logging () const;

private:
    void ****old_values;
    void ****new_values;

};

void insert_cm::logging() const {
    Node::logging();
}

class update_cm {

};

class delete_cm {

};

#endif //DATA_CM_H
