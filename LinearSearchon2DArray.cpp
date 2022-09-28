#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int row, int col, int target) {
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Creating a 2D array
    int arr[3][4];


    // Row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    int target;
    cout << "Enter the element to search " << endl;
    cin >> target;

    if (isPresent(arr,3,4,target)) {
        cout << "Element is found " << endl;
    }
    else {
        cout <<"Element Not found " << endl;
    }

    return 0;
}