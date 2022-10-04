#include <iostream>
using namespace std;

void update(int **pptr) {
    // pptr = pptr + 1; // Creates New address

    // *pptr = *pptr + 1; // increases ptr's address

    **pptr = **pptr + 1; // increases actual value
}

int main() {
    
    int val = 5;
    int *ptr = &val;
    int **pptr = &ptr;

    cout << "integer Value using ptr  : " << *ptr << endl;
    // Value at address of address of ptr
    cout << "integer value using pptr : " << **pptr << endl;
    
    cout << "val Address : " << &val << endl;
    cout << "val Address in ptr : " << ptr << endl;
    // Value at address of ptr is address of val
    cout << "val Address in ptr : " << *pptr << endl;
    cout << "ptr Address in pptr : " << pptr << endl;
    cout << endl << endl;

    // Updating
    cout << "Before" << endl;
    cout << val << endl;
    cout << ptr << endl;
    cout << pptr << endl;
    cout << "updating... " << endl;
    update(pptr);
    cout << "After" << endl;
    cout << val << endl;
    cout << ptr << endl;
    cout << pptr << endl;

    
    return 0;
}