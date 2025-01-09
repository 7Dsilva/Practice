#include<bits/stdc++.h>

using namespace std;

// g++ -o ContainMostWater.exe ContainMostWater.cpp && ./ContainMostWater.exe

int main(){

    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int res = 0;
    int n = height.size();
    
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int area = (j-i)*min(height[i], height[j]);
            res = max(res, area);
        }
    }

    cout<<res<<endl;
  
    return 0;
}