
#include<bits/stdc++.h>
using namespace std;

//  g++ -o ProductOfElement.exe ProductOfElement.cpp && ./ProductOfElement.exe



int main(){

    vector<int> nums = {1,2,3,4};

    int n = nums.size();

    vector<int> res(n);
    vector<int> pre(n);
    vector<int> pos(n);

    pre[0] = 1;
    pos[n-1] = 1;

    for (int i = 1; i < n; i++) {
        pre[i] = nums[i - 1] * pre[i - 1];
        //cout<<pre[i];
    }

    for (int i = n-2; i >= 0; i--) {
        pos[i] =  nums[i + 1] * pos[i + 1];
        //cout<<pos[i];
    }

    for (int i = 0; i < n; i++) {
        res[i] = pre[i] * pos[i]    ;
        cout<<res[i];
    }

 





    return 0;
}



