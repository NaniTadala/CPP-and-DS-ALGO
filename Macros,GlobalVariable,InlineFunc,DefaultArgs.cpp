#include<bits/stdc++.h>
using namespace std;

#define PI 3.14 // MACRO

int global = 20; // Global Variable

inline int getMax(int a, int b) { // Inline functions should be 1-3 lines and compiler dependent.
  return (a>b) ? a : b; // Terenary operator
}

void print(int arr[], int n, int start = 0) { // Default arguments
  for (int i = start; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int a = 1, b =2;
  int ans = 0;

  ans = getMax(a,b); // inline will simply replace block of code in it before compilation.
  cout << ans << endl;

  ++a;
  b = b + 5;

  ans = getMax(a,b);
  cout << ans << endl; 
  
  int arr[5] = {2,4,6,8,0};
  int size = 5;

  print(arr,size);
  cout << endl;
  print(arr,size,2); // start will be replaced with 2.

  return 0;
}