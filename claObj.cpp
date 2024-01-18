#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    Car carObj1;
    carObj1.brand = "Chevy";
    carObj1.model = "Camaro";
    carObj1.year = 2001;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "GT";
    carObj2.year = 2024;

    cout << carObj1.brand << " " << carObj1.model << " " <<
carObj1.year << "\n"; 
    cout << carObj2.brand << " " << carObj2.model << " " <<
carObj2.year << "\n";


    return 0;
}