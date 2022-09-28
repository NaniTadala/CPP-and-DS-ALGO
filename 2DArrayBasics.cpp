#include <bits/stdc++.h>
using namespace std;

void print(int arr[][4],int row,int col) {
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    // Initialization of a 2D array
    int temp1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // It will initilize Row wise
    int temp2[3][4] = {
        {1,2,3,4},  // ----> 1 row ---->
        {5,6,7,8},  // ----> 2 row ---->
        {9,10,11,12} // ----> 3 row ---->
    };

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

    /* Column wise input
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }
    */
    
    print(arr,3,4);
    
    return 0;
}