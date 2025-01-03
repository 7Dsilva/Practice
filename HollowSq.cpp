#include<bits/stdc++.h>

using namespace std;


//  g++ -o HollowSq.exe HollowSq.cpp && ./HollowSq.exe


/*

*****
*   *
*   *
*   *
*****


*/




int main(){

    int n = 5;

    for(int i=0;i<n;i++){

        string str;

        for(int j=0;j<n;j++){
        
            if(i == 0 || j == 0 || i == (n-1) || j == (n-1)){
                cout << str + "*";   
            } else{
                cout << str + " ";
            }
        }

        cout<<str<<endl ;

    }

    return 0;
}


/*
        if(i == 0 || i == (n-1)){
            cout << str + "*";
        } else {
            cout << str + " ";
        }  

        */

/*
for(int j=0;j<n;j--){

    if(j == 0 || j == (n-1)){

        cout << str + "*";
    }

    else{

        cout << str + " ";
    }
 
}



*/
