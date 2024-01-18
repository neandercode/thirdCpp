#include <iostream>
#include <string>
using namespace std;

class MyClass
{       // the class
public: // access specifier
    void myMethod()
    { // method function
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj;    // create an object of MyClass
    myObj.myMethod(); // call the method

    return 0;
}