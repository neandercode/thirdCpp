#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:
        void myFunction() {
            cout << "this is the parent class." ;
        }
};

class MyChild: public MyClass {
};

class MyGrandChild: public MyChild {
};

int main()
{
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}