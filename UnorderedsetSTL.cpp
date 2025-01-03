
#include<bits/stdc++.h>

using namespace std;



//  g++ -o UnorderedsetSTL.exe UnorderedsetSTL.cpp && ./UnorderedsetSTL.exe


// return 0 can be written anywhere to abort if your main is int type 

int main(){

    unordered_set<int> seen;

    vector<int> arr = {1,2,3,4,1};
    int n = size(arr);

    for(int i=0;i<n;i++){
        
        if(seen.count(arr[i])){
            cout<<"true"<<endl; 
            return 0;
        }
          
        seen.insert(arr[i]); 


    }   

    cout<<"false"<<endl;
        

    
  
}