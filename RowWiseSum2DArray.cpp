#include <bits/stdc++.h>
using namespace std;

void RowSum(int arr[][4],int row,int col) {
    int i = 1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << i++ <<"st row sum " << sum << endl;
    }
}

int main() {
    
    int arr[3][4];

    // Row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    
    RowSum(arr,3,4);

    return 0;
}