#include <iostream>
using namespace std;

// Base class A
class A {
  public:
    void displayA() {
      cout << "Class A" << endl;
    }
};

// Base class B
class B : public A {
  public:
    void displayB() {
      cout << "Class B" << endl;
    }
};
class C : public A {
  public:
    void displayC() {
      cout << "Class C" << endl;
    }
};

// Derived class D
class D : public B, public C {
  public:
    void displayD() {
      cout << "Class D" << endl;
    }
};
int main() {
  
  D obj;
  
  obj::displayA(); // Class A
  obj.displayB(); // Class B
  obj.displayC(); // Class C
  obj.displayD(); // Class D
  
}
