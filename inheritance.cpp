#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

class Car: public Vehicle {
    public:
        string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;

}

/*I do notice that with this example, the output on vs code gives me a warning
stating that the = sign is a c++11 extension*/