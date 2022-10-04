#include <iostream>
using namespace std;

int main()
{
    // & - address operator
    // * - asterisk (value at address)
    int num = 6;
    int *ptr1 = &num;

    cout << "Value of integer : " << num << endl;
    cout << "Address of integer : " << ptr1 << endl;
    cout << "Value at address : " << *ptr1 << endl;
    cout << "Size of integer : " << sizeof(num) << endl;
    cout << "Size of pointer to integer : " << sizeof(ptr1) << endl;
    cout << endl;

    double d = 6.9;
    double *ptr2 = &d;
    cout << "Value of double : " << d << endl;
    cout << "Address of double : " << ptr2 << endl;
    cout << "Value at address : " << *ptr2 << endl;
    cout << "Size of double : " << sizeof(d) << endl;
    cout << "Size of pointer to double : " << sizeof(ptr2) << endl;
    cout << endl;
    // Playing with value at that address property of pointer
    num = 6;
    int a = num;
    a++; // This causes 'a' value to 7 but 'num' value i still 6

    int *p = &num;
    cout << "Before Value : " << num << endl;
    (*p)++; // Changes value at address level.
    cout << "After Value : " << num << endl;

    return 0;
}