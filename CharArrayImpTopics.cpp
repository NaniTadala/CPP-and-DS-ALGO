#include <bits/stdc++.h>
using namespace std;

bool validChar(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >='0' && ch <= '9')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char ch[], int n) {
    int s = 0;
    int e = n-1;
    while (s <= e) {
        if (toLowerCase(ch[s]) != toLowerCase(ch[e])) {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

void reverseching(int n, char ch[]) {
    int s = 0;
    int e = n-1;
    while (s < e) {
        swap(ch[s++], ch[e--]);
    }
}

int getLength(char ch[]) {
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        count++;
    return count;
}

int main()
{
    char ch[20];
    
    cin >> ch;
    cout << "Your string : " << ch << endl;;
    int len = getLength(ch);
    cout << "Length of string is : " << len << endl;
    reverseching(len, ch);
    cout << "Reverse string : " << ch << endl;
    cout << "is Palindrome ? : " << checkPalindrome(ch,len) << endl;
    return 0;
}