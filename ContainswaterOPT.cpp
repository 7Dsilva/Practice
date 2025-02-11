#include<bits/stdc++.h>

using namespace std;

// g++ -o ContainswaterOPT.exe ContainswaterOPT.cpp && ./ContainswaterOPT.exe



int main(){

    vector<int> h = {1,8,6,2,5,4,8,3,7};
    int res = 0;
    int n = h.size();
    int area;
    
    int l = 0;
    int r = n-1;

    while(l<r){
        area = (r-l)*min(h[l], h[r]);     // trick is to only use area 
        res = max(res, area);    
        if(h[l] < h[r]){
            l++;
        }else {
            r--;
        }

    }

    cout<<res<<endl;
  
    return 0;
}