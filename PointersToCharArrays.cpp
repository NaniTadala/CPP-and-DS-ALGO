#include <iostream>
using namespace std;

int main()
{
    // Cout implementation is different for int arrays and char arrays
    int arr[5] = {1,2,3,4,5}; // int array
    char ch[6] = "abcde"; // Char array

    cout << arr << endl; // Points to address of first element
    cout << ch << endl; // Prints entire content

    int *i = &arr[0]; // stores address of 1st element
    char *c = &ch[0]; // stores entire content

    cout << i << endl;
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; // Prints next memory address value until it finds null char

    char *ch = "abcde"; // RISKY!!

    return 0;
}