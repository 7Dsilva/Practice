#include<bits/stdc++.h>
using namespace std;

// g++ -o ValidPalindrome.exe ValidPalindrome.cpp && ./ValidPalindrome.exe


bool alpha(char c) {
    return (c >= 'A' && c <= 'Z' || 
            c >= 'a' && c <= 'z' || 
            c >= '0' && c <= '9');
}

bool isPalindrome(const std::string& s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
        while (l < r && !alpha(s[l])) {
            l++;
        }
        while (r > l && !alpha(s[r])) {
            r--;
        }
        if (tolower(s[l]) != tolower(s[r])) {
            return false;
        }
        l++; 
        r--;

    }
    return true;

}

int main() {
    
    string s = "race a car";
    
    

    bool x = isPalindrome(s);

    cout<<x;
     

    return 0;
}
