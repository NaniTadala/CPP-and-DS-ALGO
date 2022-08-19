#include <iostream>
#include<climits>
using namespace std;

bool linersearch(int arr[],int n,int search) {
    
    for (int i = 0; i<n; i++) {
        if (arr[i] == search) {
            return 1;
        }
    }
    return 0;
}

int main() {
    
    
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int search;
    cout << "Enter the element to search ";
    cin >> search;
    if (linersearch(arr,10,search)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

}
