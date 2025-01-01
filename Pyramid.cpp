#include<bits/stdc++.h>

using namespace std;

// g++ -o inverted.exe inverted.cpp && ./inverted.exe

// g++ -o Star_pattern1.exe Star_pattern1.cpp && ./Star_pattern1.exe


// // g++ -o Pyramid.exe Pyramid.cpp && ./Pyramid.exe



int main(){

    string str;
    int n = 5;   // number of rows is 5 fixed  

    // only working on each row of i total 5 rows calculate spaces and stars thats it 



     
      for(int i=1;i<=n;i++){     // i starts  from index 1 


          for(int k=1;k<=n-i;k++){      // k starts at 1 to n - i think here why? to add space from start 


            cout<<str + " ";    

          }


        for(int j=1;j<i*2;j++){           // j<i*2 --- on first 1 < 2 and so on....

 
            cout << str + "*";              
         }

            cout<<str<<endl;

      }



    return 0;
}
