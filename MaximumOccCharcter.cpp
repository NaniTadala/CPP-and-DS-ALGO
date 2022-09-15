#include <bits/stdc++.h>
using namespace std;

char maxOccCharacter(string s) {
    int arr[26] = {0}; // using array to store count of each character (index a -> 0, b-> 1.... z -> 25)
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        // in case of Lower case (ex: a = 97 therfore, 97-97 = 0 so 0 index value will be incremented)
        if (s[i] >= 'a' && s[i] <= 'z') {
            index = s[i] - 'a';
        }
        else { // in case of Upper Case
            index = s[i] - 'A';
        }
        arr[index]++;
    }
    
    // Finding index with maximum value in arr[26]
    int max = -1, ans;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i]) {
            ans = i;
            max = arr[i];
        } // index with max value will be stored in ans
    }
    
    char finalAns = 'a' + ans; // Ex: if p is ans, 15 index + 97 -> 112 which is p
    return finalAns;

}

int main() {
    
    string s = "apple";
    cout << maxOccCharacter(s);
    return 0;
}