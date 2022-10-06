#include <bits/stdc++.h>
using namespace std;

int main() {
    // input row
    int row;
    cout << "Enter no. of rows : ";
    cin >> row;

    // input col
    int col;
    cout << "Enter no. of cols : ";
    cin >> col;

    int **arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    } // Creation done.

    // Taking input
    cout << "Enter elements : ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // Output
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    // releasing memort
    for (int i = 0; i < row; i++) {
        delete [] arr[i];
    }
    delete []arr;
    // done.
    return 0;
}