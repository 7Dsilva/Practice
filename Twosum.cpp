#include<bits/stdc++.h>

using namespace std;



//  g++ -o Twosum.exe Twosum.cpp && ./Twosum.exe




int main(){

    vector<int> nums = {3,2,4};

    int n = nums.size();
    int target = 6;

    unordered_map<int, int> N;

    for(int i=0;i<n;i++){

        int sub = target - nums[i];   // ith - target 

        if(N.count(sub)){

           cout<<"["<<N[sub]<<","<<i<<"]"<<endl;       
        }

        N[nums[i]] = i;

    }

    
  return 0;
}