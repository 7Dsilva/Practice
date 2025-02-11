

#include<bits/stdc++.h>
using namespace std;

//  g++ -o TopKfrequentelemtOPT.exe TopKfrequentelemtOPT.cpp && ./TopKfrequentelemtOPT.exe


int main(){

    vector<int> nums  = {77,77,77,98,25};
    unordered_map<int, int> reps;
    int k = 2;
    vector<vector<int>> freq((nums.size() + 1));    // nums +1 

    for(int n: nums){

        reps[n] = 1 + reps[n];
                  // count of every element         
    }
/*
    for(const auto z : reps){

        cout<<z.second<<z.first; 
    } */

    for(const auto var:reps){
        freq[var.second].push_back(var.first); 
        
           // pass how many times the elemet occures at index and the element itself as its value 
    }


    vector<int> res;

    for(int i = freq.size() - 1;i>0;i--){
        
    for(int n : freq[i]){

        res.push_back(n);
        if(res.size() == k){
          
    for(const auto& j : res){
        cout<<j<<" ";
        }    
   
        }
    }

}




    return 0;
}

