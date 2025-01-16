#include<bits/stdc++.h>

using namespace std;

//  g++ -o BuySellOPT.exe BuySellOPT.cpp && ./BuySellOPT.exe

// Optimal ; we use two pointer approach which solves it n time  



int main(){

    vector<int> prices = {7,6,4,3,1};
    
    int res = 0;   

    int l = 0;
    int r = 1;

    while(r<prices.size()){

        if(prices[l]<prices[r]){

        int profit = prices[r] - prices[l];

        res  = max(res, profit);

        }else {
        
            l = r;
        }

        r++;
    }

    //cout<<res<<endl;


return 0;
}