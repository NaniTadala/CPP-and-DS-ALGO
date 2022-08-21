#include <iostream>
using namespace std;

int main() {
    int n,temp;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i+=2) 
    {
        // we can also use swap(arr[i],arr[i+1])
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
    } // if n = 8 last swap will occur at index 6 cause 6+2 will be 8 and 8 < 8 is false
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

}
