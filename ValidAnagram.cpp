
#include<bits/stdc++.h>

using namespace std;



//  g++ -o ValidAnagram.exe ValidAnagram.cpp && ./ValidAnagram.exe




int main(){

    string s = "rat";
    string t = "car";

    

    unordered_map<char,int> sr;
    unordered_map<char,int> tr;

    if(s.length() != t.length()){
        cout<<false<<endl;
    }

    for(int i=0;i<s.length();i++){
        sr[s[i]]++;
        tr[t[i]]++;

    }
        if(sr == tr){
        cout<<"true"<<endl; 

       }else{

           cout<<"false"<<endl;
       }
    
  return 0;
}
