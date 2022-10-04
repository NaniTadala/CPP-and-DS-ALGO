#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,5,6};

    cout << "Address of arr[0] : " << arr << endl;
    cout << "Address of arr[0] : " << &arr[0] << endl;
    cout << "Value at arr[0] : " << *arr << endl;

    cout << "Value at 0th index : " << *(arr) << endl;
    cout << "Value at 1th index : " << *(arr + 1) << endl;
    cout << "Value at 2nd index : " << *(arr + 2) << endl;

    // Some confusing MCQ's
    cout << *arr + 1 << endl;
    cout << *(arr) + 1<< endl;

    cout << *(arr + 2)<< endl;
    int i = 2;
    cout << i[arr]<< endl;

    // Sizes
    int temp[10] = {1,2};
    cout << "Size of array : " << sizeof(temp) << endl;
    cout << "Size of integer at 0th index " << sizeof(*temp) << endl;
    
    int *ptr = &temp[0];
    cout << "Size of pointer to array : " << sizeof(*ptr) << endl;
    cout << "Size of integer : " << sizeof(ptr) << endl;
    cout << "Size of address of ptr : " << sizeof(&ptr) << endl;
    cout << endl;
    
    // Addresses
    int a[20] = {1,2,3,4,5};
    cout << "Address of a[0] : " << &a[0] << endl;
    int *p = &a[0];
    cout << "Address of pointer to array : " << &p << endl;
    
    int b[10] = {2,3,4,5};
    // b = b + 1 (Not Possible)
    int *ptr2 = &b[0];
    cout << ptr2 << endl;
    ptr2 = ptr2 + 1;
    cout << ptr2 << endl;

    return 0;
}