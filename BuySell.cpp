#include<bits/stdc++.h>

using namespace std;

//  g++ -o BuySell.exe BuySell.cpp && ./BuySell.exe

// bruteforce: uses 2 for loops and will take n^2

int main(){


    vector<int> prices = {7,6,4,3,1};
    int n = prices.size();
    int res = 0;

    for(int i=0;i<n;i++){

        int x = prices[i];

        for(int j=i+1;j<n;j++){

            int y = prices[j];

            res = max(res, (y-x));
        }

    }


    cout<<res<<endl;


    return 0;
}