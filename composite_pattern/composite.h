#ifndef COMPOSITE_PATTEN_H
#define COMPOSITE_PATTEN_H

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

namespace Composite_pattern {
class Node {
 public:
  Node() {}
  virtual void print() const = 0;
  virtual ~Node() {}
};

class File : public Node {
 public:
  File(string name) : name_(name) {}
  void print() const { cout << name_ << endl; }
  ~File() {}

 private:
  string name_;
};

class Directory : public Node {
 public:
  Directory(string name) : name_(name) {}
  void print() const {
    cout << name_ << endl;
    cout << "---------------------------------------" << endl;

    /*
    for (vector<Node*>::iterator iter = vec.begin();
            iter != vec.end(); iter++)
        (*iter)->print();
        */
    for (unsigned int i = 0; i < vec.size(); i++) vec[i]->print();

    cout << "---------------------------------------" << endl;
  }
  void add(Node *node) { vec.push_back(node); }
  ~Directory() {
    for (unsigned int i = 0; i < vec.size(); i++) delete vec[i];
  }

 private:
  string name_;
  vector<Node *> vec;
};
};      // namespace Composite_pattern
#endif  // COMPOSITE_PATTEN_H
