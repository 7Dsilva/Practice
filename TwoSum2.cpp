#include<bits/stdc++.h>

using namespace std;

// g++ -o TwoSum2.exe TwoSum2.cpp && ./TwoSum2.exe


vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;

    while (l < r) {
        int twosum = numbers[l] + numbers[r];

        if (twosum < target) {

            l++;
        } else if (twosum > target) {

            r--;
        } else {

            return {l + 1, r + 1}; 
        }
    }

    return {};   // if nothing then return empty
}

int main(){

    vector<int> numbers = {1,3,4,5,7,11};
    int target = 9;

    vector<int> res = twoSum(numbers,target);
    cout<<"["<<res[0]<<","<<res[1]<<"]"<<endl;
    return 0;
}