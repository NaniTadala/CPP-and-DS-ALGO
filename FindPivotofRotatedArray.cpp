#include<iostream>
using namespace std;

int findPivot(int arr[],int n){
    int s = 0, e = n-1;
    int m = s + (e - s)/2;

    while (s < e) {
        if (arr[m] >= arr[0]) {
            s = m + 1;
        }

        else {
            e = m;
        }
        m = s + (e - s)/2;
    }
    return s;
}


int main() {
    int arr[5] = {3,8,10,17,1};
    int fp = findPivot(arr,5);

    cout << fp << endl;
    
}