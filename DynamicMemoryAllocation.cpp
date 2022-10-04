#include <iostream>
using namespace std;

int main() {

    /* Bad Practice to create variable size array
    int n;
    cin >> n;
    int arr[n];
    */
    int n;
    cin >> n;
    // variable size array
    int* arr = new int[n];
     //stack    //Heap

    return 0;
}