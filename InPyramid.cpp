#include<bits/stdc++.h>

using namespace std;


//  g++ -o InPyramid.exe InPyramid.cpp && ./InPyramid.exe






int main(){

    // declaring string here resets it always initialize inside i 

    int n = 5;   

    for(int i=5;i>0;i--){
        string str;     // i starts  from index 1
        for(int k=1;k<=n-i;k++){
            str = str + " ";
            // cout<<str<<endl;
        }

        for(int j=1;j<2*i;j++){
            str = str + "*";
            // cout<<str<<endl; 
        }

          cout<<str<<endl;
    }
    
    return 0;
}
