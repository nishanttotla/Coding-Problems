#include <iostream>

using namespace std;

class A {
public:
  virtual void funky() {
    cout<<"You called A!"<<endl;
  }
};

class B : public A {
public:
  void funky() {
    cout<<"You called B!"<<endl;
  }
};

class C : public B {
public:

};

template <class T>
class Foo {
public:
  void add(T x, T y) {
    T z = x + y;
    cout<<z<<endl;
  }
};

int main() {
  A* a = new C();
  a->funky();

  Foo<string> *foo = new Foo<string>();
  foo->add("2","4");
  return 0;
}