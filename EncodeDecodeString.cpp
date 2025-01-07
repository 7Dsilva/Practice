#include<bits/stdc++.h>

using namespace std;

//  g++ -o EncodeDecodeString.exe EncodeDecodeString.cpp && ./EncodeDecodeString.exe

// 4#neet4#code4#love3#you


string encode(vector<string>& strs) {

    string enc;

    for(const string& s : strs){

        enc  +=  to_string(s.size()) + "#" + s;   
    }

    return enc;
}


vector<string> decode(string enc) {

    vector<string> res;
    int i = 0;

    while(i<enc.size()){
        int j = i;

        while(enc[j] != '#'){
            j++;
        }

        int length = stoi(enc.substr(i, j-i));
        i = j+1;
        j = i + length;

        res.push_back(enc.substr(i, length));

        i = j;

    }
    return res;
}

int main(){

    vector<string> strs = {"neet","code","love","you"};
    string encoded = encode(strs);


   vector<string> rel = decode(encoded);

        cout<<"{";
   for (const string& s : rel) {    
        cout << s << ",";   
    } 
        cout<<"}";

    cout<<endl;

    return 0;
}