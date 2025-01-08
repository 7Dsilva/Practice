#include<bits/stdc++.h>
using namespace std;

//  g++ -o LongestCommonSubsequence.exe LongestCommonSubsequence.cpp && ./LongestCommonSubsequence.exe


// 9,1,4,7,3,-1,0,5,8,-1,6

// maxi = max(maxi, count);


int main(){

vector<int> arr = {1,2,0,1};  

// 0 1 1 2+


int n = arr.size();
int  count = 0;

int maxi = 0;


sort(arr.begin(), arr.end());
 

 // 1,2,3,7,11,12,13,14,15,16,99,100

if(n==0){
    cout<<"0"<<endl;
    return 0;
}

// -1-1013456789aws

for(int i=0;i<n-1;i++){

    if(arr[i+1] - arr[i] == 1){
        count++;
        //cout<<arr[i]<<endl; 
        // max count compare with running count
    } else{

        maxi = max(count, maxi);
       // cout<<maxi<<endl;
        count = 0;
    }

        cout<<i<<" "<<arr[i+1]<<arr[i]<<count<<endl;
}

        maxi = max(count, maxi);
//cout<<count+1<<endl;

        cout<<maxi<<endl;

    return 0;  
}



