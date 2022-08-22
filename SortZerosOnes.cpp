#include <iostream>
using namespace std;

int main() {
    int n = 8,j = 0;
    int arr[8] = {0,0,0,0,1,0,1,1},brr[6];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[j] = 0;
            j++;
        }
        
    }

    for (int i = j; i < n; i++) {
        arr[i] = 1;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    
}