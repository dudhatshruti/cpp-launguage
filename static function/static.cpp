// A static function in C++ is a member function of a class that is associated with the class itself rather than with an instance or object of the class. This means that a static function can be called without creating an instance of the class.

// The static keyword is used to define a static function in C++. A static function can access only static data members and other static functions of the class. It cannot access non-static data members or non-static member functions of the class.


#include <iostream>
using namespace std;
class MyClass {
  static int count;    // static data member
  public:
    // constructor
    MyClass(){
        count++;
    }
    // static member function
    static int getCount() {
      return count;
    }
    
};
int MyClass::count = 0;
int main() {
  MyClass obj1, obj2, obj3;
  cout << "Count of Objects of MyClass is : "<< MyClass::getCount() << endl;
  return 0;
}