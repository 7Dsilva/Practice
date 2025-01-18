#include <bits/stdc++.h>
using namespace std;

// g++ -o PermutationString.exe PermutationString.cpp && ./PermutationString.exe

// O(26*N)

int main(){
    
    string s1 = "ab";
    string s2 = "eidboaoo";

    unordered_map<char, int> c1;   

    for(char c : s1){     // count of c1 
        c1[c]++;
    }

    int need = c1.size();

    for(int i=0;i<s2.length();i++){
         unordered_map<char, int> c2;
         int cur = 0;

         for(int j = i;j<s2.length();j++){
            char c = s2[j];
            c2[c]++;

            if(c1[c] < c2[c]){

                break;
            }

            if(c1[c] == c2[c]){

                cur++;
            }

            if(cur == need){

                cout<<"true"<<endl;
            }
         }

    }
  

    cout<<"false"<<endl;

    return 0;
}