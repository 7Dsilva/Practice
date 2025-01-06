#include<bits/stdc++.h>
using namespace std;

//  g++ -o GroupAnagramOP.exe GroupAnagramOP.cpp && ./GroupAnagramOP.exe



int main(){

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};


    unordered_map<string, vector<string>> rep;

    for(const auto& s:strs){
        vector<int> count(26, 0);       // a-z 6

        for(char c : s){
                                        //  find count of each char 
            count[c - 'a']++;
        }

        string key = to_string(count[0]);   //initialize key to 0 and convert to string

        for(int i=1;i<26;i++){
            key += "," + to_string(count[i]);       // insert into key as chars 
        }

        rep[key].push_back(s);              //push those char count to rep as key and match it with each string value

    }

    vector<vector<string>> res;

    for(const auto& pair:rep){
        res.push_back(pair.second);         //push.second because need chars 
        
    }

    for (const auto& i : res) {         // we need 2D OUTPUT
        
    for (const auto& j : i) {
            cout << j << " ";
        }
        
    }  
     





    return 0;
}