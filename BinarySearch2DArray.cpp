#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
        
    int n = row*col;
        
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
        
    while (s <= e) {
        int element = matrix[mid/col][mid%col];
            
        if (element == target) {
            return true;
        }
        if (element < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
            mid = s+(e-s)/2;
        }
        return false;
    }

int main() {
  //
}