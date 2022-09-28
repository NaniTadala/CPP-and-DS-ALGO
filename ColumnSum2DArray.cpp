#include <bits/stdc++.h>
using namespace std;

void ColumnSum(int arr[][4],int row,int col) {
    int i = 1;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
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

    ColumnSum(arr,3,4);

    return 0;
}