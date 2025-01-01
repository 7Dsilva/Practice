
/*

*
**
***
****
*****



g++ -g -std=c++11 /home/dsilva/Desktop/Practice/Star_pattern1.cpp -o /home/dsilva/Desktop/Practice\Star_pattern1.cpp.exe


g++ -o Star_pattern1.exe Star_pattern1.cpp
./Star_pattern1.exe

*/





#include <bits/stdc++.h>

using namespace std;


 




int main(){

 cout<<"TEST";

    for(int i=0;i<=5;i++){

       string str;
      
       for(int j=0;j<i;j++) {
            // cout<<i<<j<<endl;  
            str = str + "*";       
       }

        cout<<str<<endl;
    }
    return 0;
}