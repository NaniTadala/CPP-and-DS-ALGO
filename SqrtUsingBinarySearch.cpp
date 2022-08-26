#include <iostream>
using namespace std;

int sqrtusingbs(int n) {
    int s = 0, e = n;
    int m = s + (e-s)/2;
    int ans = -1;
    while (s <= e) {
        
        int sq = m*m;

        if (sq == n) {
            return m;
        }
        if (sq < n) {
            ans = m;
            s = m + 1;
        }
        else {
            e = m - 1;
        }
        m = s + (e-s)/2;
    }
    return ans;
    
}

double morePrecision(int n, int precision,int tempsol) {
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++) {
        factor = factor/10;
        
        for (double j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}


int main() {
    
    int n;
    cout << " Enter a number : ";
    cin >> n;
    int tempsol = sqrtusingbs(n);
   
    cout <<" Answer is " << morePrecision(n, 3, tempsol) << endl;

    return 0;
}