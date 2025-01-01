#include<bits/stdc++.h>

using namespace std;

// g++ -o inverted.exe inverted.cpp && ./inverted.exe

// g++ -o Star_pattern1.exe Star_pattern1.cpp && ./Star_pattern1.exe




int main(){
      // cout<<"TEST"<<endl;

      for(int i=5;i>=0;i--){

       string str;
      
       for(int j=0;j<i;j++){
            
        // cout<<i<<j<<endl;  
            str = str + "*";        
       }

        cout<<str<<endl;
    }





    return 0;
}
