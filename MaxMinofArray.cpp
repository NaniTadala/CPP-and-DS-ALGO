#include <iostream>
#include<climits>
using namespace std;

int getMin(int arr[],int size) {
    
    int minimum = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < minimum)
        // {
        //     minimum = arr[i];
        // }
        minimum = min(minimum,arr[i]); // Replacement of above block
        
    }
    return minimum;
    
}

int getMax(int arr[],int size) {
    
    int maximum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > maximum)
        // {
        //     maximum = arr[i];
        // }
        maximum = max(maximum,arr[i]); // Replacement of above block
        
    }
    return maximum;
    
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Maximum value is " << getMax(arr,n) << endl;
    cout << "Minimum value is " << getMin(arr,n) << endl;

}
