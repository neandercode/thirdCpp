#include <iostream>
#include <string>
using namespace std;

void myArray(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
    }
}

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myArray(myNumbers);

    return 0;
}