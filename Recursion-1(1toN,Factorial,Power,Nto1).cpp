#include <iostream>
using namespace std;

void print1toN(int n) {
    // base case
    if (n == 0)
        return;
    // recursive relation 
    print1toN(n-1);
    // processing // Tail recursion
    cout << n << " ";
}

void printNto1(int n) {
    // base case
    if (n == 0)
        return;
    // processing // Head recursion
    cout << n << " ";
    // recursive relation
    printNto1(n-1);
}

int factorial(int n) {
    // base case
    if (n == 0) {
        return 1;
    }
    // recursive relation
    return n * factorial(n-1);
}

int power(int n) {
    // base case
    if (n == 0)
        return 1;
    // recursive relation
    return 2 * power(n-1);
}

int main() {
    int n;
    cin >> n;
    
    cout << "Printing from 1 to N: ";
    print1toN(n);
    cout << endl;

    cout << "Printing from N to 1: ";
    printNto1(n);
    cout << endl;

    int fact = factorial(n);
    cout <<"Facortial of " << n  << " is " << fact << endl;

    int pow = power(n);
    cout <<"2 Power of " << n  << " is " << pow << endl;

    return 0;
}