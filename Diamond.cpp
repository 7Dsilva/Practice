#include<bits/stdc++.h>

using namespace std;


//  g++ -o Diamond.exe Diamond.cpp && ./Diamond.exe

/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/




int main(){

    int n = 9;

    int x = (n/2) + 1;   // 5

    int y = (n/2);      //4




    for(int i=0;i<=x;i++){
        
        string str;

        for(int k=1;k<=x-i;k++){      

        cout<< str + " ";    
   
        }


        for(int j=1;j<2*i;j++){           // j<i*2 --- on first 1 < 2 and so on....

        cout << str + "*";  

        }

        cout<<str<<endl;

    }




    for(int i=y;i>0;i--){

        string str;
        
        for(int k=0;k<=y-i;k++){      

        cout << str + " ";    
   
        }


        for(int j=1;j<2*i;j++){           

        cout << str + "*";  

        }


        cout<<str<<endl;

    }

    
    





   
    
    return 0;
}
