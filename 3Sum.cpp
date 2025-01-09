#include<bits/stdc++.h>

using namespace std;

// g++ -o 3Sum.exe 3Sum.cpp && ./3Sum.exe

int main(){

    vector<int> nums = {-1,0,1,2,-1,-4,-2,-3,3,0,4};
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;

    for(int i=0;i<nums.size();i++){
        
        if(i>0 && nums[i]==nums[i-1]) continue;     // for first element and skipping the same element

        int l = i+1;
        int r = nums.size()-1;

        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];

            if(sum < 0){
                l++;
            } else if(sum > 0){
                r--;
            } else {
                res.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;

                while(l<r && nums[l] == nums[l-1]){          // if l is accessing the same elent 
                l++;
                }
            }

        }


    }

    for (const auto& row : res) {
        for (const auto& el : row) {
            cout << el << " "; 
        }
        cout << endl;
    }

    return 0;
}