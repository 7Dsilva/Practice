#include<bits/stdc++.h>

using namespace std;


// brute 




//  g++ -o Groupanagrams.exe Groupanagrams.cpp && ./Groupanagrams.exe

// grouping in anyorder 



int main(){

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    int n = strs.size();

    unordered_map<string, vector<string>> rep;


    for(const auto& i: strs){

        string sorted = i;
        sort(sorted.begin(), sorted.end());
         

        rep[sorted].push_back(i);

    }

    vector<vector<string>> rel;   // result THIS  IS A 2D VECTOR

    for(auto r:rep){
       rel.push_back(r.second);

     }

    
    for (const auto& group : rel) {     // we need 2D OUTPUT
        
        for (const auto& str : group) {
            cout << str << " ";
        }
        
    }
        



        

    

    

    
  return 0;
}
