#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[],int n) {
    int s = 0;
    int e = n-1;
    while (s <= e) {
        if (str[s] != str[e]) {
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}

char toLower(char str) {
    if (str >= 'a' && str <= 'z') {
        return str;
    }
    else {
        char temp = str - 'A' + 'a';
        return temp;
    }
}

void reverseString(char str[],int n) {
    int s = 0;
    int e = n-1;
    while (s < e) {
        swap(str[s++] , str[e--]);
    }
    
}

bool validChar(char str) {
    if ( (str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z') || (str >= '0' && str <= '9') ) {
        return true;
    }
    return false;
}

int getLength(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    char rev[100];
    cin.get(str,100); // cin get to input string with spaces
    int len = getLength(str);
    int j = 0;
    // Converting all uppercase letters into lowercase and removing all non-alphanumeric characters
    for (int i = 0; i <= len; i++)
    {
        if (validChar(str[i])) {
            str[j] = toLower(str[i]);
            j++;
        }
    }
    str[j] = '\0'; // Placing null character at end to avoid garbage values
    len = getLength(str);
    // Copying str to rev
    for (int i = 0; i <= len; i++)
    {
        rev[i] = str[i];
    }
    cout << "Before Reversal : " << str << endl;
    reverseString(rev,len);
    cout << "After Reversal : " << rev << endl;
    // Check Palindrome without any extra char array
    cout << "is Palindrome : " << checkPalindrome(str,len) << endl; 
    return 0;
}