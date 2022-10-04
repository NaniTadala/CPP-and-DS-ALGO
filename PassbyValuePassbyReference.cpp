#include <iostream>
using namespace std;

// Pass by reference. recieves same memory
void update2(int& n) {
    n = n + 1;
}

// Pass by value. New copy is created.
void update1(int n) {
    n = n + 1;
}

int main() {

    int i = 5;

    // creating reference variable
    int& j = i;

    cout << i << endl;
    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    int n = 10;
    cout << "Pass by value" << endl;
    cout << "Before : " << n << endl;
    update1(n);
    cout << "After : " << n << endl << endl;

    cout << "Pass by reference" << endl;
    cout << "Before : " << n << endl;
    update2(n);
    cout << "After : " << n << endl;
    
    return 0;
}