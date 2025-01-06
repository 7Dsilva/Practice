#include<bits/stdc++.h>
using namespace std;

//  g++ -o ContainsDuplicate.exe ContainsDuplicate.cpp && ./ContainsDuplicate.exe




int main(){

    vector<int> nums = {2,14,18,22,22};

    int n = nums.size();
  /*  sort(nums.begin(), nums.end());

    if(n == 1){
        cout<<"true"<<endl;
        
    } else if(nums[n-1] == nums[n-2]){
        cout<<"true"<<endl;
        
    } */

    for(int i=0;i<n;i++){
        sort(nums.begin(), nums.end());

        if(n == 1){
            cout<<"true"<<endl;
            break;
        
        } else if(nums[n-1] == nums[n-2]){
            cout<<"true"<<endl;
            break;
        
        }

        if(nums[i] == nums[i+1]){
            cout<<"true"<<endl;
            
        }else{
            cout<<"false"<<endl;
            
            
        }   

    }

    return 0;
}