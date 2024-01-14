#include <iostream>
#include <string>
using namespace std;

void mySiblings(string fname, int age)
{
    cout << fname << " Llamas. " << age << " years old. \n";
}


int main()
{
    mySiblings("Jessica", 35);
    mySiblings("Joshua", 34);
    mySiblings("Joseph", 34);
    return 0;
}