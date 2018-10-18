#include "composite.h"

using namespace Composite_pattern;

int main() {
  File *f1 = new File("file1");
  File *f2 = new File("file2");
  File *f3 = new File("file3");
  File *f4 = new File("file4");
  File *f5 = new File("file5");
  File *f6 = new File("file6");
  File *f7 = new File("file7");

  Directory *d1 = new Directory("directory1");
  Directory *d2 = new Directory("directory2");

  d1->add(f1);
  d1->add(f2);
  d1->add(f3);

  d2->add(f4);
  d2->add(f5);
  d2->add(f6);

  d1->add(d2);
  d1->add(f7);

  d1->print();

  return 0;
}
