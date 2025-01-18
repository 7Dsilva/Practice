#include <bits/stdc++.h>
using namespace std;

// g++ -o characterReplacement.exe characterReplacement.cpp && ./characterReplacement.exe

// O(26*N)  

int main(){
    string s = "AABABBA";
    int k = 1;
    int res = 0;
    unordered_set<char> c(s.begin(), s.end());

    for(char i: c){

        int count = 0, l = 0; 
        for(int r = 0;r<s.size();r++){
            if(s[r]==i){     

                count++;
            }

            while((r - l + 1) - count > k){      // window size - most occuring character > k

                if(s[l] == i){

                    count--;
                }

                l++;
            }

            res = max(res, (r - l + 1));

        }
    }

    cout<<res<<endl;

    return 0; 
}
