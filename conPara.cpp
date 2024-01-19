#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    Car carObj1("Chevy", "Camaro SS", 2001);
    Car carObj2("Ford", "Raptor", 2024);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}