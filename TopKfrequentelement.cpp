

#include<bits/stdc++.h>
using namespace std;

//  g++ -o TopKfrequentelement.exe TopKfrequentelement.cpp && ./TopKfrequentelement.exe

// {77,77,77,98,25};

int main(){

    vector<int> nums = {1,1,1,2,2,3};

    int n = nums.size();

    int k = 2;

    unordered_map<int, int> rep;

    for(int i : nums){
        
        rep[i]++;              
    }

    vector<pair<int, int>> arr;                         

    for(const auto& i : rep){
        arr.push_back({i.second, i.first}); 
        cout<<i.second;                                                                            
        cout<<i.first;
    }



    sort(arr.rbegin(), arr.rend());     
    
    vector<int> res;

    for(int i=0;i<k;++i){
        res.push_back(arr[i].second);
        
    }

    for(const auto& j : res){

       // cout<<j<<" ";
    }
   






    return 0;
}

