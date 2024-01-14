#include <iostream>
#include <string>
using namespace std;

void mySiblings(string fname, int age)
{
    cout << fname << " Llamas. " << age << " years old. \n";
}


int main()
{
    mySiblings("Ricky", 35);
    mySiblings("Ticky", 34);
    mySiblings("Tavii", 34);
    return 0;
}