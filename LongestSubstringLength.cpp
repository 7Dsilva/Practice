#include <bits/stdc++.h>
using namespace std;

// g++ -o LongestSubstringLength.exe LongestSubstringLength.cpp && ./LongestSubstringLength.exe


// we use two pointers cause sliding windows length is based on left and a right pointer 

int main(){

    string s = "abcabcbb";

    unordered_set<char> res;
    int n = 0;

    int l = 0;

    for (int i=0;i<s.length();i++){
        while(res.find(s[i]) != res.end()){

            res.erase(s[l]);
            l++;  
            
        }

        res.insert(s[i]);
        n = max(n, (i-l+1));

    }

        cout<<n<<endl;

    return 0;
}