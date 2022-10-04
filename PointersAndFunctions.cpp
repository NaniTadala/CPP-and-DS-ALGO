#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p) {
   // p = p + 1;
   // cout <<"Inside Update : " << p << endl; (Wont change actual value)

   *p = *p + 1; // Will Chanage Actual value
}

int getSum(int arr[], int n) {
    // In case of arrays pointer will be passed
    cout << "Size of pointer : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;
    
    print(p);

    cout << "Before : " << *p << endl;
    update(p);
    cout << "After : " << *p << endl;
    
    int arr[5] = {1,2,3,4,5};
    cout << getSum(arr,5);
    
    return 0;
}