#include<bits/stdc++.h>

using namespace std;

//  g++ -o Revise.exe Revise.cpp && ./Revise.exe



int main(){

    unordered_map<int, int> res;

    vector<int> nums = {2,7,11,15};

    int t = 9;

    int n = nums.size();

    for(int i=0;i<n;i++){

        int sub = t - nums[i];

        if(res.count(sub)){

            cout<<nums[sub]<<i<<endl;
        }

          res[nums[i]] = i;
    }


    return 0;
}



/*
star  pattern 1

 int n = 5;

    for(int i=0;i<=n;i++){
        string s;

        for(int j=0;j<i;j++){

            s += "*";
        }

        cout<<s<<endl;
    }

inverted triangle: 

nt n = 5;

    for(int i=5;i>0;i--){
    string s;
        for(int j=0;j<i;j++){
            s += "*";
            
        }

        cout<<s<<endl;

    }

Pyramid / inverse pyramid


 int n = 5;

    for(int i=5;i>0;i--){
        string s;
        for(int k=1;k<n-i;k++){
            s += " ";
        }

        for(int j=1;j<2*i;j++){

            s += "*";
        }

        cout<<s<<endl;
    }


Diamond

 int n = 12;
    int a = (n/2) + 1;   // 5
    int b = (n/2);       // 4
    for(int i=0;i<a;i++){
        string s; 
        for(int k=1;k<n-i;k++){
            s += " ";
        }

        for(int j=1;j<2*i;j++){

            s += "*";
        }

        cout<<s<<endl;

    }

    for(int i=b;i>0;i--){
        string s;
        for(int k=1;k<n-i;k++){
            s += " ";
        }

        for(int j=1;j<2*i;j++){

            s += "*";
        }

        cout<<s<<endl;
    }



    // Contains Duplicate 


    vector<int> nums = {1,2,3,1};
    int n = nums.size();

    unordered_set<int> res;

    for(int i=0;i<n;i++){
        if(res.count(nums[i])){
            cout<<"True"<<endl;;
            return 0;
        }

        res.insert(nums[i]);

    }
        cout<<"False"<<endl;









*/